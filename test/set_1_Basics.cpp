#include "crypto.hpp"
#include <gtest/gtest.h>
#include <base.hpp>
#include <functional>

using namespace std;

TEST(hex, toBase64) {
    string input = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    string expected = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";
    string output = as<64>(of<16>(input));
    ASSERT_EQ(expected, output);
}

//int sum(int,int)
//function<function<int(int)>(int)> increment = curry(sum)(1)
//int three = increment(2)
//template <typename A, typename B, typename C>
//auto curry(function<C(A,B)> f) {
//    return [](A a) {
//        return []() {};
//    };
//}

//template <typename Callable, typename Collection>
//function<function<Collection(Collection)>(Collection)> zipWith(Callable callable) {
//    return bind(callable, placeholders::_1, placeholders::_2);
////    return ([](char a, char b){ return a ^ b; })(input)(against);
//};

// established invarient is that a and b are the same length
template<typename F>
auto transform(string a, string b, F f) -> string {
    string c;
    c.resize(a.size());
    transform(begin(a), end(a), begin(b), begin(c), f);
    return c;
}

TEST(hex, xorr) {
//    Fixed XOR
//    Write a function that takes two equal-length buffers and produces their XOR combination.
//            If your function works properly, then when you feed it the string:
    string input = "1c0111001f010100061a024b53535009181c";
//    ... after hex decoding, and when XOR'd against:
    string against = "686974207468652062756c6c277320657965";
//    ... should produce:
    string expected = "746865206b696420646f6e277420706c6179";
    string actual = transform(as<256>(of<16>(input)), as<256>(of<16>(against)), [](char a, char b) { return a ^ b; });
//    string actual = zipWith([](char a, char b){ return a ^ b; })(input)(against);
    ASSERT_EQ(expected, as<16>(of<256>(actual)));
}

//std::vector<int> range(int begin, int end) {
//    std::vector<int> vec;
//    vec.reserve(end - begin);
//    for (int i = 0; i < end - begin; ++i) {
//        vec[i] = begin + i;
//    }
//    return vec;
//}

//TEST(range, one) {
//    std::vector<int> vec {0,1,2,3};
//    std::vector<int> r = range(0, 4);
//    ASSERT_EQ(vec, r);
//}

//TEST(sliding, one) {
//    std::vector expected = {{0,1,2},{2,3,4}};
//    std::vector actual = Sliding<int>(range(0,4), 3, 2).toVector();
//    ASSERT_EQ(expected, actual);
//}

//TEST(set_one, convert_hex_to_base_64) {
//    std::string hex = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
//    std::string baseSixtyFour = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";
//    ASSERT_EQ(baseSixtyFour, hexToBase64(hex));
//}

//TEST(indexOf, indexOf) {
//    std::vector<unsigned char> alphabet = {'a','b','c','d','e','b','g'};
//    std::vector<std::pair<int, unsigned char>> cases = {
//            std::make_pair(0, 'a'),
//            std::make_pair(1, 'b'),
//            std::make_pair(-1, 'L'),
//    };
//    for (auto &&pair : cases) {
//        ASSERT_EQ(pair.first, indexOf(pair.second, alphabet.data(), alphabet.size()));
//    }
//    ASSERT_EQ(-1, indexOf('\0', alphabet.data(), alphabet.size()));
//    ASSERT_EQ(-1, indexOf('a', NULL, alphabet.size()));
//    ASSERT_EQ(-1, indexOf('a', alphabet.data(), '\0'));
//    ASSERT_EQ(-1, indexOf('a', alphabet.data(), -1));
//}

//TEST(one, two) {
//    unsigned char h = 'h';
//    unsigned char *p = &h;
//    ASSERT_EQ(1, equals(p, p, 1));
//}

//TEST(one, three) {
//    ASSERT_EQ(1,1);
//}
//

//TEST(simple_test, something) {
//    unsigned char hex[] = {'4','1'};
//    unsigned char byte;
//    readBase(&byte, hex, 1, 16);
//    ASSERT_EQ(byte, 'A');
//}
//void allTest()
//{
//    int num = 256;
////    unsigned char* binary = (unsigned char*)malloc(256);
////    unsigned char* hex = (unsigned char*)malloc(256 * 2);
//    unsigned char binary[num]; // fill it with binary shit
//    unsigned char hex[num*2]; // the hex thet represents the binary shit
//    unsigned char result[num]; // go back to the binary shit
//    for(int i = 0; i < num; i++)
//    {
//        binary[i] = i;
//    }
//    for (int i = 0; i < num; i++)
//    {
//        unsigned char t[3];
//        snprintf((char *)t, 3, "%02x", binary[i]);
//        hex[i*2] = t[0];
//        hex[i*2+1] = t[1];
//    }
//    readBase(result, hex, 256, 16);
//    assert(equals(result, binary, 256));
//}
//void longTest()
//{
//    const int length = 48;
//    unsigned char hex[] = {'4','9','2','7','6','d','2','0','6','b','6','9','6','c','6','c','6','9','6','e','6','7','2','0','7','9','6','f','7','5','7','2','2','0','6','2','7','2','6','1','6','9','6','e','2','0','6','c','6','9','6','b','6','5','2','0','6','1','2','0','7','0','6','f','6','9','7','3','6','f','6','e','6','f','7','5','7','3','2','0','6','d','7','5','7','3','6','8','7','2','6','f','6','f','6','d'};
//    unsigned char bytes[length];
//    assert(sizeof(hex) == (2 * length));
//    readBase(bytes, hex, length, 16);
//    ASSERT_EQ((const unsigned char*)"I'm killing your brain like a poisonous mushroom", (const unsigned char *)bytes);
////    fwrite(bytes, 1, length, stdout);
//}


