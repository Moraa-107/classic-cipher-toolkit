#ifndef RAIL_FENCE_H
#define RAIL_FENCE_H

#include <string>

std::string encryptRailFence(std::string plaintext, int rails);

std::string decryptRailFence(std::string ciphertext, int rails);

#endif