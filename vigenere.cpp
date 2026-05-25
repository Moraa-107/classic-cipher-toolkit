#include "vigenere.h"
#include <cctype>

using namespace std;

string encryptVigenere(string text, string key) {
    string result = "";
    int keyIndex = 0;
    int keyLen = key.length();

    for (char c : text) {
        if (isalpha(c)) { // Only shift letters
            char base = isupper(c) ? 'A' : 'a';
            char keyBase = isupper(key[keyIndex % keyLen]) ? 'A' : 'a';
            int shift = key[keyIndex % keyLen] - keyBase;
            
            result += (char)(((c - base + shift) % 26) + base);
            keyIndex++; // Only move to the next key letter if we shifted a letter
        } else {
            result += c; // Keep spaces and punctuation as is
        }
    }
    return result;
}

string decryptVigenere(string text, string key) {
    string result = "";
    int keyIndex = 0;
    int keyLen = key.length();

    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char keyBase = isupper(key[keyIndex % keyLen]) ? 'A' : 'a';
            int shift = key[keyIndex % keyLen] - keyBase;
            
            // Add 26 before modulo to handle negative numbers in C++ properly
            result += (char)(((c - base - shift + 26) % 26) + base);
            keyIndex++;
        } else {
            result += c;
        }
    }
    return result;
}
