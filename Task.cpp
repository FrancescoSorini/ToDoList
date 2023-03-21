//
// Created by sorin on 21/03/2023.
//

#include "Task.h"

Task::Task() {}

Task::Task(const std::string &title, bool completed = false) : title{title} {}

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




