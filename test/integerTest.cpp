#include "gtest/gtest.h"
#include "integer.hpp"
#include <cmath>

TEST(integer, one) {
    Integer<unsigned int> integer;
    ASSERT_EQ(integer.data.size(), 0);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
}

TEST(integer, two) {
    Integer<unsigned int> integer;
    ASSERT_EQ(integer.data.size(), 0);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 2);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
}

TEST(integer, three) {
    Integer<unsigned int> integer;
    ASSERT_EQ(integer.positive, true);
}

TEST(integer, four) {
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

TEST(integer, five) {
    Integer<unsigned int> integer;
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.increment();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
}

TEST(integer, six) {
    Integer<unsigned int> integer;
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 2);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.increment();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.increment();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 2);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.increment();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
    integer.decrement();
    ASSERT_EQ(integer.isZero(), false);
    ASSERT_EQ(integer.data.size(), 1);
    integer.increment();
    ASSERT_EQ(integer.isZero(), true);
    ASSERT_EQ(integer.data.size(), 0);
}
