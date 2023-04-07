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

    int task_counter(); //const

    void mark_completed(Task task);


//modifica task
//contatore completed o no
//cerca task per data, cerca per nome task, testare la presenza task sia per nome che per data
private:
    std::string title;
    std::vector<Task> tasks;
};

#endif //TODOLIST_LIST_H
