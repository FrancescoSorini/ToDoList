//
// Created by sorin on 21/03/2023.
//

#ifndef TODOLIST_LIST_H
#define TODOLIST_LIST_H

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include "Task.h"

class List {
public:
    List();
    explicit List(const std::string &title);

    const std::string &getTitle() const;

    void add_task(const Task &task);
    void remove_task(const Task &task);
    void print_tasks(); //const

    void mark_completed(Task task);

    int task_counter(); //const
    int completed_counter();

    //modify task
    void mod_task_title(Task &task, const std::string &new_title);

    void mod_task_desc(Task &task, const std::string &new_desc);

    void mod_task_duedate(Task &task, const Date &new_date);

    //cercare task per nome, cercare task per data, testare la presenza task sia per nome che per data
    Task find_by_name(const std::string &name);

    int find_by_date(const Date &date);

private:
    std::string title;
    std::vector<Task> tasks;
};

#endif //TODOLIST_LIST_H
