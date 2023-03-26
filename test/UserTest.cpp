//
// Created by sorin on 22/03/2023.
//
#include "gtest/gtest.h"
#include"../User.h"

TEST(User, DefaultConstructor) {
    User u;
    ASSERT_EQ(0, u.list_counter());
}

TEST(User, ListManagement) {
    User u;
    List l1;
    List l2;
    u.add_list(l1);
    u.add_list(l2);
    ASSERT_EQ(2, u.list_counter());
    u.remove_list(l1);
    ASSERT_EQ(1, u.list_counter());
}