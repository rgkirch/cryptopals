#include "crypto.hpp"
#include <gtest/gtest.h>

TEST(set_one, convert_hex_to_base_64) {
    std::string hex = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    std::string baseSixtyFour = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";
    ASSERT_EQ(baseSixtyFour, hexToBase64(hex));
}

TEST(indexOf, indexOf) {
    std::vector<unsigned char> alphabet = {'a','b','c','d','e','b','g'};
    std::vector<std::pair<int, unsigned char>> cases = {
            std::make_pair(0, 'a'),
            std::make_pair(1, 'b'),
            std::make_pair(-1, 'L'),
    };
    for (auto &&pair : cases) {
        ASSERT_EQ(pair.first, indexOf(pair.second, alphabet.data(), alphabet.size()));
    }
    ASSERT_EQ(-1, indexOf('\0', alphabet.data(), alphabet.size()));
    ASSERT_EQ(-1, indexOf('a', NULL, alphabet.size()));
    ASSERT_EQ(-1, indexOf('a', alphabet.data(), '\0'));
    ASSERT_EQ(-1, indexOf('a', alphabet.data(), -1));
}

TEST(one, two) {
    unsigned char h = 'h';
    unsigned char *p = &h;
    ASSERT_EQ(1, equals(p, p, 1));
}


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


