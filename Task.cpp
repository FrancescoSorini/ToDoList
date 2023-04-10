//
// Created by sorin on 21/03/2023.
//

#include "Task.h"

Task::Task(const std::string &title, const std::string &description, Date due_date, bool completed)
        : title{title}, description{description}, due_date(due_date), completed(completed) {}

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

bool Task::is_completed() const {
    return completed;
}

Date Task::getDueDate() const {
    return due_date;
}

Task::Task() {}

void Task::setDueDate(const Date &new_date) {
    due_date = new_date;
}

void Task::print_task() {
    std::cout << "Titolo: " << title << std::endl;
    std::cout << "Descrizione: " << description << std::endl;
    std::cout << "Scadenza: " << due_date << std::endl;
    std::cout << "Completato? " << (completed ? "Si" : "No") << std::endl;
    std::cout << std::endl;
}

bool Task::operator==(const Task &other) {
    return title == other.title && description == other.description && due_date == other.due_date &&
           completed == other.completed;
}








