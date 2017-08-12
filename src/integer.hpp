#pragma once

//#include <vector>
//#include <algorithm>
#include <type_traits>

using namespace std;

// cant make negative 0 unrepresentable so the code should just handle negative and positive 0
//https://www.youtube.com/watch?v=ojZbFIQSdl8&feature=youtu.be&t=907
template<typename T>
class Integer {
    static_assert(std::is_unsigned<T>::value, "must be unsigned type");
public:
    void increment() {
        if(isZero()) {
            positive = true;
        }
        if(positive) {
            away_from_zero(0);
        } else {
            toward_zero(0);
        }
    }

    void decrement() {
        if(isZero()) {
            positive = false;
        }
        if(positive) {
            toward_zero(0);
        } else {
            away_from_zero(0);
        }
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

    void away_from_zero(int index) {
        if (index == data.size()) data.push_back(0);
        if (0 == ++data[index]) away_from_zero(index + 1);
    }

    void toward_zero(int index) {
        if (index == data.size() - 1 && data.back() == 0) data.pop_back();
        if (index == data.size()) data.push_back(0);
        if (0 == data[index]--) toward_zero(index + 1);
    }
};
