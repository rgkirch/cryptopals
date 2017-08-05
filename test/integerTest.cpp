#include "gtest/gtest.h"
#include "integer.hpp"
#include <cmath>

TEST(integer, one) {
    Integer<unsigned int> integer;
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), true);
}

TEST(integer, two) {
    Integer<unsigned int> integer;
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), true);
}

TEST(integer, three) {
    Integer<unsigned int> integer;
    ASSERT_EQ(integer.positive, true);
}

TEST(integer, four) {
//    static_assert(sizeof(char) == 1, "char must be one byte for test to apply");
    int iterations = (int) pow(2.0, sizeof(char) * 8) - 1;
    Integer<unsigned char> integer;
    integer.increment();
    int inc{0};
    while (integer.data.size() == 1) {
        integer.increment();
        ++inc;
    }
    ASSERT_EQ(iterations, inc);
}
