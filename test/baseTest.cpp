#include "base.h"
#include "gtest/gtest.h"

TEST(testhell, basetest) {
    puts("hello");
    ASSERT_EQ(5, five());
}