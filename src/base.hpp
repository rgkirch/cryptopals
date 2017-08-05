#pragma once

#include <string>
#include <cstring>
#include <cmath>

using namespace std;

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
    long long int number = 0;
    for (int i = 0; i < s.length(); ++i) {
        number += indexOf(arr, s[i]) * (int) pow(16, s.length() - (i + 1));
    }
    return number;
}

template<>
std::string as<64>(long long int number) {
    char arr[]{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};
    string result;
    while (number > 0) {
        result += arr[number % 64];
        number /= 64;
    }
    return result;
}

