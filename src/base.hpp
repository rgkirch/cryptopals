#pragma once

#include <string>
#include <gmpxx.h>

using namespace std;

template<int base>
auto of(std::string s) {
    return mpz_class(s, base);
}

template<int base>
string as(mpz_class number) {
    static_assert(base >= 2 && base <= 62, "mpz doesn't support bases outside the range of [2, 62]");
    return number.get_str(base);
}
template<>
std::string as<64>(mpz_class number) {
    char arr[]{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};
    string result;
//    cout << endl << number.get_str(10) << endl;
    while (number > 0) {
        mpz_class temp = number % 64;
        result += arr[temp.get_ui()];
        number /= 64;
    }
    return {rbegin(result), rend(result)};
}

