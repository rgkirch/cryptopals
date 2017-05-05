#ifndef CRYPTOPALS_CRYPTO_H
#define CRYPTOPALS_CRYPTO_H

#include <string>

std::string hexToBase64(std::string hex);
unsigned long indexOf(const unsigned char c, const unsigned char* cs, const int length);
int equals(unsigned char* a, unsigned char* b, int len);
#endif //CRYPTOPALS_CRYPTO_H
