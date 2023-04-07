//
// Created by sorin on 22/03/2023.
//

#include "gtest/gtest.h"
#include "../List.h"

TEST(List, DefaultConstructor) {
    List l;
    ASSERT_EQ(0, l.task_counter());
}

TEST(List, TaskManagement) {
    List l;
    Task t1;
    Task t2;
    l.add_task(t1);
    l.add_task(t2);
    ASSERT_EQ(2, l.task_counter());
    l.remove_task(t1);
    ASSERT_EQ(1, l.task_counter());
}

