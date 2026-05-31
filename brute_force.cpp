#include "brute_force.h"
#include <iostream>
#include "caesar.h"

using namespace std;

void caesarBruteForce(string ciphertext)
{
    string plaintext = "";

    for (int i = 1; i <= 25; i++)
    {
        string result = decrypt(ciphertext, i);
        cout << "Shift: " << i << " --> " << result << endl;
    }
}