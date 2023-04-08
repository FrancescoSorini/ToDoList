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

    explicit Task(const std::string &title, const std::string &description, Date due_date, bool completed);

    //getter
    const std::string &getTitle() const;

    const std::string &getDescription() const;

    Date getDueDate() const;

    //setter
    void setTitle(const std::string &new_title);

    void setDescription(const std::string &new_description);

    void setDueDate(const Date &new_date);

    bool is_completed();

private:
    std::string title;
    std::string description;
    bool completed;
    Date due_date;

    friend class List;
};

#endif //TODOLIST_TASK_H
