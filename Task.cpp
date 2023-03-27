//
// Created by sorin on 21/03/2023.
//

#include "Task.h"

Task::Task(const std::string &title, Date due_date, bool completed = false)
        : title{title}, due_date(due_date) {}

const std::string &Task::getTitle() const {
    return title;
}

void Task::setDescription(const std::string &description) {
    Task::description = description;
}

const std::string &Task::getDescription() const {
    return description;
}

bool Task::is_completed() {
    return completed;
}

void Task::mark_completed() {
    completed = true;
}

Date Task::get_due_date() {
    return due_date;
}

Task::Task() {}





