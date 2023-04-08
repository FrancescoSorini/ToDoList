//
// Created by sorin on 21/03/2023.
//

#include "Task.h"

Task::Task(const std::string &title, const std::string &description, Date due_date, bool completed = false)
        : title{title}, description{description}, due_date(due_date) {}

const std::string &Task::getTitle() const {
    return title;
}

void Task::setTitle(const std::string &new_title) {
    title = new_title;
}

void Task::setDescription(const std::string &new_description) {
    description = new_description;
}

const std::string &Task::getDescription() const {
    return description;
}

bool Task::is_completed() {
    return completed;
}

Date Task::getDueDate() const {
    return due_date;
}

Task::Task() {}

void Task::setDueDate(const Date &new_date) {
    due_date = new_date;
}








