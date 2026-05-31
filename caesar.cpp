#include "caesar.h"
#include <iostream>

using namespace std;
string encrypt(string plaintext, int shift)
{
    string encrypted_text = "";
    for (int i = 0; i < plaintext.length(); i++)
    {

        char c = plaintext[i];
        if (c == ' ')
        {
            encrypted_text += ' ';
            continue;
        }
        else if (c >= 'A' && c <= 'Z')
        {

            int pos = c - 'A'; // h=7 , pos = 7-0=7 , shifted = pos + shift , shift=(3) 7+3=10 10 % 26 =10 -->k
            int shifted = (pos + shift) % 26;
            char newChar = shifted + 'A';
            encrypted_text += newChar;
        }
        else if (c >= 'a' && c <= 'z')
        {
            int pos = c - 'a';
            int shifted = pos + shift;
            shifted = shifted % 26;
            char newChar = shifted + 'a';
            encrypted_text += newChar;
        }
        else
        {
            encrypted_text += c;
        }
    }

    return encrypted_text;
}

string decrypt(string ciphertext, int shift)
{
    string decrypted_text = "";
    for (int i = 0; i < ciphertext.length(); i++)
    {
        char c = ciphertext[i];
        if (c == ' ')
        {
            decrypted_text += ' ';
            continue;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            int pos = c - 'A';
            int shifted = (pos - shift) % 26;
            if (shifted < 0)
            {
                shifted = shifted + 26;
            }
            char newchar = shifted + 'A';
            decrypted_text += newchar;
        }
        else if (c >= 'a' && c <= 'z')
        {
            int pos = c - 'a';
            int shifted = (pos - shift) % 26;
            if (shifted < 0)
            {
                shifted = shifted + 26;
            }
            char newchar = shifted + 'a';
            decrypted_text += newchar;
        }
        else
        {
            decrypted_text += c;
        }
    }

    return decrypted_text;
}