#include "gtest/gtest.h"
#include <base.hpp>
#include "crypto.hpp"

//TEST(indexof, indexof) {
//    auto arr = "0123456789abcdef";
//    int zero = indexOf(arr, '0');
//    int ten = indexOf(arr, 'a');
//    int negativeOne = indexOf(arr, 'g');
//    ASSERT_EQ(zero, 0);
//    ASSERT_EQ(ten, 10);
//    ASSERT_EQ(negativeOne, -1);
//}

TEST(base, test) {
    auto result = of<16>("123");
    auto str = as<10>(result);
    ASSERT_EQ(str, "291");
}

