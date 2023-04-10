//
// Created by sorin on 22/03/2023.
//
#include "gtest/gtest.h"
#include"../Task.h"

TEST(Task, DefaultConstructor) {
    Task t;
    ASSERT_FALSE(t.is_completed());
}

TEST(Task, EqualOperator) {
    Date d(10, 4, 2023);
    Date d1(1, 1, 2020);
    Task t1("Task 1", "descrizione", d, false);
    Task t2("Task 1", "descrizione", d, false);
    Task t3("Task 3", "descr", d1, true);

    ASSERT_TRUE(t1 == t2);
    ASSERT_FALSE(t2 == t3);
}