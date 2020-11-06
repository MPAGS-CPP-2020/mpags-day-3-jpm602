#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>

//! Encrypt or decrypt text using the Caesar cipher with the given key
class CaesarCipher
{
    public:
        explicit CaesarCipher(const size_t key);
        explicit CaesarCipher(const std::string key);
        size_t key_;
};

#endif
