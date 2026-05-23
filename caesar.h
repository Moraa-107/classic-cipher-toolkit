#ifndef CAESAR_H
#define CAESAR_H

#include <string>

std::string encrypt(std::string plaintext, int shift);
std::string decrypt(std::string ciphertext, int shift);

#endif