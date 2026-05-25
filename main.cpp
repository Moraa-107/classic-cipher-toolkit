#include <iostream>
#include <string>
#include "caesar.h"
using namespace std;

int main()
{
    cout << "Classic Cipher Toolkit" << endl;
    cout << "Choose the cipher you want to use:" << endl;
    cout << "1. Caesar Cipher" << endl;
    cout << "2. Vigenere Cipher" << endl;
    cout << "3. Playfair Cipher" << endl;
    cout << "4. Caesar Brute Force" << endl;
    cout << "5. Exit" << endl;
    cout << "___________________" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        string option;
        cout << "Encrypt or Decrypt?" << endl;
        cin >> option;

        if (option == "Encrypt" || option == "encrypt" || option == "e" || option == "Enc" || option == "enc" || option == "Enc")
        {
            string plaintext;
            int shift;
            cout << "Enter the text you want to encrypt: ";
            cin >> plaintext;
            cout << "Enter the shift value: ";
            cin >> shift;
            string encrypted_text = encrypt(plaintext, shift);
            cout << "Encrypted Text: " << encrypted_text << endl;
        }
        else if (option == "Decrypt" || option == "decrypt" || option == "dec" || option == "Dec"  || option == "d" || option == "D"  )
        {
            string ciphertext;
            int shift;
            cout << "Enter the text you want to decrypt: ";
            cin >> ciphertext;
            cout << "Enter the shift value: ";
            cin >> shift;
            string decrypted_text = decrypt(ciphertext, shift);
            cout << "Decrypted Text: " << decrypted_text << endl;
        }
        break;
    }
    }

    return 0;
}
