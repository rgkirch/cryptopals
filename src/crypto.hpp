#ifndef CRYPTOPALS_CRYPTO_H
#define CRYPTOPALS_CRYPTO_H

#include <string>
#include <vector>

template <typename T>
class Sliding {
public:
    Sliding(std::vector<T> vector, int size) : data(vector), size(size), step(1) { };
    Sliding(std::vector<T> vector, int size, int step) : data(vector), size(size), step(step) { };
    const std::vector<T> operator[](int index) {
    };
    std::vector<T> toVector();
private:
    const std::vector<T> data;
    const int size;
    const int step;
};


//std::string hexToBase64(std::string hex);
//unsigned long indexOf(const unsigned char c, const unsigned char* cs, const int length);
//int equals(unsigned char* a, unsigned char* b, int len);
#endif //CRYPTOPALS_CRYPTO_H
