#pragma once

#include <fstream>
#include <string>
#include <boost/filesystem.hpp>
#include <boost/optional.hpp>

using namespace std;

vector<float> get_letter_frequencies(string filename) {
    struct Sum {
        Sum() : count(0) {};
        operator()(int num) { count += num; }
        int count;
    };
    auto maybe_string = read_file_if_exists(filename);
    if(maybe_string) {
        vectorc<char> letter_counts = count_letters(maybe_string.get());
        vector<float> letter_frequency;
        letter_frequency.reserve(256);
        int total_number_of_chars = for_each(begin(letter_counts), end(letter_counts), Sum()).count;
        transform(begin(letter_counts), end(letter_counts), begin(letter_frequency), [=](int count)->float{ return count / (float)total_number_of_chars; });
    }
    return letter_frequency;
}

vector<char> count_letters(string data) {
    vector<char> data;
    data.resize(256);
    for (auto c : data) {
        data[c]++;
    }
    return data;
}

boost::optional<string> read_file_if_exists(string filename) {
    string data;
    if (boost::filesystem::exists(filename)) {
        try {
            fstream file(filename, ios_base::in);
            char c;
            while(file >> c) {
                data.append(c);
            }
            return data;
        } catch (exception e) {
            cerr << e.what() << endl;
            return {};
        }

    } else {
        return {};
    }
}


