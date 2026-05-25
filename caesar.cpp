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
        int pos = c - 'A'; // h=7 , pos = 7-0=7 , shifted = pos + shift , shift=(3) 7+3=10 10 % 26 =10 -->k
        int shifted = pos + shift;
        shifted = shifted % 26;
        char newChar = shifted + 'A';
        encrypted_text += newChar;
    }

    return encrypted_text;
}

string decrypt(string ciphertext, int shift)
{

    string decrypted_text = "";
    for (int i = 0; i < ciphertext.length(); i++)
    {
        char c = ciphertext[i]; //  k=10  , pos = 10-0 =10 , shifted = pos- (shift)=3 10 -3 =10 -3 =7 ,  7 % 26 =7 --> h
        int pos = c - 'A';
        int shifted = pos - shift;
        if (shifted < 0)
        {
            shifted = shifted + 26;
        }
        char newchar = shifted + 'A';
        decrypted_text += newchar;
    }

    return decrypted_text;
}