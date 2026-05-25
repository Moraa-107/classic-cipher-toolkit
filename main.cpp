#include <iostream>
#include <string>
#include <limits>
#include "caesar.h"
#include "vigenere.h"

using namespace std;

int main()
{
    while (true)
    {
        cout << "\n===========================" << endl;
        cout << "  Classic Cipher Toolkit   " << endl;
        cout << "===========================" << endl;
        cout << "1. Caesar Cipher" << endl;
        cout << "2. Vigenere Cipher" << endl;
        cout << "3. Playfair Cipher (Coming Soon)" << endl;
        cout << "4. Caesar Brute Force (Coming Soon)" << endl;
        cout << "5. Exit" << endl;
        cout << "___________________________" << endl;
        cout << "Choice: ";

        int choice;
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting toolkit. Goodbye!" << endl;
            break;
        }

        switch (choice)
        {
        case 1:
        {
            string option;
            cout << "Encrypt or Decrypt? (e/d): ";
            cin >> option;

            int shift;
            string text;

            cout << "Enter the shift value: ";
            cin >> shift;

            cout << "Enter the text: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear newline from buffer
            getline(cin, text);                                  // Reads the whole sentence with spaces

            if (option == "Encrypt" || option == "encrypt" || option == "e")
            {
                cout << "\n[RESULT] Encrypted Text: " << encrypt(text, shift) << endl;
            }
            else if (option == "Decrypt" || option == "decrypt" || option == "d")
            {
                cout << "\n[RESULT] Decrypted Text: " << decrypt(text, shift) << endl;
            }
            break;
        }
        case 2:
        {
            string option;
            cout << "Encrypt or Decrypt? (e/d): ";
            cin >> option;

            string key, text;

            cout << "Enter the keyword: ";
            cin >> key;

            cout << "Enter the text: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear newline from buffer
            getline(cin, text);

            if (option == "Encrypt" || option == "encrypt" || option == "e")
            {
                cout << "\n[RESULT] Encrypted Text: " << encryptVigenere(text, key) << endl;
            }
            else if (option == "Decrypt" || option == "decrypt" || option == "d")
            {
                cout << "\n[RESULT] Decrypted Text: " << decryptVigenere(text, key) << endl;
            }
            break;
        }
        default:
            cout << "Feature not fully implemented yet or invalid choice." << endl;
        }
    }

    return 0;
}
