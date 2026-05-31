# Classic Cipher Toolkit

A C++ toolkit for classical cipher encryption and decryption.

## Features

- **Caesar Cipher Encryption & Decryption**:
  - Supports **Mixed Case** (`UPPERCASE` and `lowercase` letters dynamically).
  - Supports **Spaces** (leaves spaces intact during encryption/decryption).
- **Vigenere Cipher**: Added base structure and logic.
- **Interactive Terminal Menu**: Robust input handling using `cin.ignore()` to prevent menu skipping.
- **Modular C++ Project Structure**

## Technologies Used

- C++
- Git
- GitHub

## Project Structure

classic-cipher-toolkit/
│
├── main.cpp
├── caesar.cpp
├── caesar.h
├── vigenere.cpp
├── vigenere.h
└── README.md

## Compile and Run

```bash
g++ main.cpp caesar.cpp vigenere.cpp -o toolkit.exe
.\toolkit.exe
```
