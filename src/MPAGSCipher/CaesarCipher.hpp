#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>
#include <vector>

//! Encrypt or decrypt text using the Caesar cipher with the given key
class CaesarCipher
{
    public:
        explicit CaesarCipher(const size_t key);
        explicit CaesarCipher(const std::string& key);
        const std::string applyCipher(const std::string& inputText, const bool& encrypt);
        size_t key_;
        std::vector<char> alphabet_;

};

#endif
