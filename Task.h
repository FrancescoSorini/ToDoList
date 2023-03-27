//
// Created by sorin on 21/03/2023.
//

#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H

#include <string>
#include "Date.h"

class Task {
public:
    Task();

    explicit Task(const std::string &title, Date due_date, bool completed);

    const std::string &getTitle() const;

    void setDescription(const std::string &description);

    const std::string &getDescription() const;

    Date get_due_date();

    bool is_completed();

    void mark_completed();


private:
    std::string title;
    std::string description;
    bool completed{};
    Date due_date;
};

#endif //TODOLIST_TASK_H
