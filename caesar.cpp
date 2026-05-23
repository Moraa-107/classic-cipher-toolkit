#include "caesar.h"
#include <iostream>

using namespace std;
string encrypt(string plaintext, int shift)
{
    string encrypted_text = "";
    for (int i = 0; i < plaintext.length(); i++)
    {
        char c = plaintext[i];
        int pos = c - 'A';
        int shifted = pos + shift;
        shifted = shifted % 26;
        char newChar = shifted + 'A';
        encrypted_text += newChar;
    }
    return encrypted_text;
}