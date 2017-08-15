#pragma once

#include <fstream>
#include <string>
#include <boost/filesystem.hpp>
#include <boost/optional.hpp>

using namespace std;

boost::optional<string> read_file_if_exists(string filename) {
    string data;
    if (boost::filesystem::exists(filename)) {
        fstream file(filename, ios_base::in);
        char c;
        while (file >> c) {
            data += c;
        }
        return data;
    } else {
        return {};
    }
}

vector<int> count_letters(string s) {
    vector<int> data;
    data.resize(256);
    for (auto c : s) {
        data[c]++;
    }
    return data;
}

template <typename A, typename B, typename F>
auto myBind(boost::optional<B> b, F f)->boost::optional<result_of_t<F(B)>> {
//    static_assert(std::result_of_t<F(*B)> == boost::optional, "");
    if(b) {
        return f(*b);
    } else {
        return {};
    }
}

vector<float> get_letter_frequencies(string filename) {
    struct Sum {
        Sum() : count(0) {};
        int operator()(int num) { return count += num; }
        operator int() { return count; }
        int count;
    };
    return myBind(read_file_if_exists(filename), [](auto str)->vector<float> {
        vector<int> letter_counts = count_letters(str);
        vector<float> letter_frequency;
        letter_frequency.reserve(256);
        int total_number_of_chars = for_each(begin(letter_counts), end(letter_counts), Sum());
        transform(begin(letter_counts), end(letter_counts), begin(letter_frequency),
                  [=](int count) -> float { return count / (float) total_number_of_chars; });

        return letter_frequency;
    });
}


