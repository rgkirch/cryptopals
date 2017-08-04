#pragma once

#include <string>
#include <cstring>
#include <cmath>

template<int T>
long long int of(std::string);

template<int T>
std::string as(long long int number);

int indexOf(const char arr[], char c) {
    for (int i = 0; i < strlen(arr); ++i) {
        if (arr[i] == c) return i;
    }
    return -1;
}

template<>
long long int of<16>(std::string s) {
    char arr[]{"0123456789abcdef"};
    long long int number{0};
    for (int i = 0; i < s.length() / 3; ++i) {
        number = number +
                 (
                           indexOf(arr, s[i * 3 + 0]) * (int)pow(16, 2)
                         + indexOf(arr, s[i * 3 + 1]) * (int)pow(16, 1)
                         + indexOf(arr, s[i * 3 + 2]) * (int)pow(16, 0)
                 ) * (int) pow(16, i);
    }
    return number;
}

template<>
std::string as<64>(long long int number) {
    char arr[]{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};

}

