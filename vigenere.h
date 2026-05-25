#ifndef VIGENERE_H
#define VIGENERE_H

#include <string>

std::string encryptVigenere(std::string plaintext, std::string key);
std::string decryptVigenere(std::string ciphertext, std::string key);

#endif
