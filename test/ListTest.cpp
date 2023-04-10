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

TEST(List, MarkingCompleted) {
    List l;
    Task t1;
    Task t2;
    l.add_task(t1);
    l.add_task(t2);
    l.mark_completed(t1);
    ASSERT_EQ(1, l.completed_counter());
}

TEST(List, ModifyTask) {
    List l;
    Date d1(13, 4, 2023);
    Date d2(15, 6, 2023);
    Task t1("Prima Task", "Prova prima task", d1, false);
    l.mod_task_title(t1, "Nuovo titolo prima task");
    l.mod_task_desc(t1, "Nuova descrizione prima task");
    l.mod_task_duedate(t1, d2);
    ASSERT_EQ("Nuovo titolo prima task", t1.getTitle());
    ASSERT_EQ("Nuova descrizione prima task", t1.getDescription());
    ASSERT_TRUE(t1.getDueDate() == d2);
}

TEST(List, FindTask) {
    List l;
    Date d1(9, 4, 2023);
    Date d2(3, 4, 2023);
    Task t1("Prima task", "cercare prima", d1, false);
    Task t2("Seconda task", "cercare seconda", d2, true);
    Task t3("Terza task", "cercare terza", d2, true);
    l.add_task(t1);
    l.add_task(t2);
    l.add_task(t3);
    ASSERT_TRUE(l.find_by_name("Prima task") == t1);
    ASSERT_TRUE(l.find_by_date(d2) == 2);
}