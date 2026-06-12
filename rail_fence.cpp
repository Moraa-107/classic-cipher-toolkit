#include "rail_fence.h"
#include <vector>
#include <string>

using namespace std;

string encryptRailFence(string plaintext, int rails)
{
    if (rails <= 1 || plaintext.length() <= 1)
    {
        return plaintext;
    }

    vector<string> fence(rails, string(plaintext.length(), '\n'));

    int row = 0;
    bool moving_down = false;

    for (int i = 0; i < plaintext.length(); i++)
    {
        fence[row][i] = plaintext[i];

        if (row == 0 || row == rails - 1)
        {
            moving_down = !moving_down;
        }

        if (moving_down)
        {
            row++;
        }
        else
        {
            row--;
        }
    }

    string encrypted_text = "";
    for (int i = 0; i < rails; i++)
    {
        for (int j = 0; j < plaintext.length(); j++)
        {
            if (fence[i][j] != '\n')
            {
                encrypted_text += fence[i][j];
            }
        }
    }

    return encrypted_text;
}

string decryptRailFence(string ciphertext, int rails)
{
    if (rails <= 1 || ciphertext.length() <= 1)
    {
        return ciphertext;
    }

    vector<string> fence(rails, string(ciphertext.length(), '\n'));

    int row = 0;
    bool moving_down = false;

    for (int i = 0; i < ciphertext.length(); i++)
    {
        fence[row][i] = '*';

        if (row == 0 || row == rails - 1)
        {
            moving_down = !moving_down;
        }

        if (moving_down)
        {
            row++;
        }
        else
        {
            row--;
        }
    }

    int index = 0;
    for (int i = 0; i < rails; i++)
    {
        for (int j = 0; j < ciphertext.length(); j++)
        {
            if (fence[i][j] == '*' && index < ciphertext.length())
            {
                fence[i][j] = ciphertext[index];
                index++;
            }
        }
    }

    string decrypted_text = "";
    row = 0;
    moving_down = false;

    for (int i = 0; i < ciphertext.length(); i++)
    {
        decrypted_text += fence[row][i];

        if (row == 0 || row == rails - 1)
        {
            moving_down = !moving_down;
        }

        if (moving_down)
        {
            row++;
        }
        else
        {
            row--;
        }
    }

    return decrypted_text;
}