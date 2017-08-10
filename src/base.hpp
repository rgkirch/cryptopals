#pragma once

#include <string>
#include <gmpxx.h>

using namespace std;

template<int base>
auto of(std::string s) {
    return mpz_class(s, base);
}

template<>
auto of<256>(std::string s) {
    struct Sum {
        Sum() : sum{0}, count{0} {}

        void operator()(int n) {
            sum += n * pow(256, count);
            count++;
        }

        int count;
        mpz_class sum;
    };
    return for_each(rbegin(s), rend(s), Sum()).sum;
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

template<>
std::string as<256>(mpz_class number) {
    string result;
//    result.resize(log(number) / log(256));
    while (number > 0) {
        result += (char) (((mpz_class) (number % 256)).get_ui());
        number /= 256;
    }
    return {rbegin(result), rend(result)};
}
