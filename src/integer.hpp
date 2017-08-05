#pragma once

#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
//typename std::enable_if<std::is_unsigned<T>::value, bool>::type
std::enable_if_t<std::is_unsigned<T>::value, bool>
class Integer {
public:
    void increment() {
        increment(0);
    }

    void decrement() {
        decrement(0);
    }

    bool isZero() {
        return all_of(begin(data), end(data), [](T i) -> bool { return i == 0; });
    }

    template<int base>
    string as() {
        string str;

    }

    bool positive{true};
    vector<T> data;
private:
    void increment(int index) {
        if (index == data.size()) data.push_back(0);
        if (0 == ++data[index]) increment(index + 1);
    }

    void decrement(int index) {
        if (index == data.size() - 1 && data.back() == 0) data.pop_back();
        if (index == data.size()) data.push_back(0);
        if (0 == data[index]--) decrement(index + 1);
    }
};
