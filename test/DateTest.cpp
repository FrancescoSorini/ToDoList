//
// Created by sorin on 27/03/2023.
//

#include "gtest/gtest.h"
#include "../Date.h"

TEST(Date, LeapYearTest) {
    ASSERT_TRUE(Date::leap_year(1996));
    ASSERT_FALSE(Date::leap_year(2023));
}

TEST(Date, EqualToTest) {
    Date d1(12, 10, 1492);
    Date d2(28, 4, 1770);
    Date d3(12, 10, 1492);
    ASSERT_FALSE(d1.equal_to(d2));
    ASSERT_TRUE(d1.equal_to(d3));
}

TEST(Date, OperatorsTest) {
    Date d4(7, 4, 2023);
    Date d5(8, 4, 2023);
    ASSERT_FALSE(d4 == d5);
    ASSERT_TRUE(d5 > d4);
    ASSERT_TRUE(d4 < d5);
    d4++;
    ASSERT_TRUE(d4 == d5);
}

