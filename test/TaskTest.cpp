//
// Created by sorin on 22/03/2023.
//
#include "gtest/gtest.h"
#include"../Task.h"

TEST(Task, DefaultConstructor) {
    Task t;
    ASSERT_FALSE(t.is_completed());
}

TEST(Task, CompletedCheck) {
    Task t1;
    t1.mark_completed();
    ASSERT_TRUE(t1.is_completed());
}