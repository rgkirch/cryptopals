#include "gtest/gtest.h"
#include "integer.hpp"

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
    Integer<unsigned short> integer;
    integer.increment();
    int inc{0};
    while (integer.data.size() == 1) {
        integer.increment();
        ++inc;
    }
    cout << integer.data.size() << endl;
    ASSERT_EQ(4000, inc);
}
