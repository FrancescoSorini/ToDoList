//
// Created by sorin on 21/03/2023.
//

#include "List.h"

List::List(const std::string &title) : title(title) {}

List::List() {}

const std::string &List::getTitle() const {
    return title;
}

void List::add_task(const Task &task) {
    tasks.push_back(task);
}

void List::remove_task(const Task &task) {
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->getTitle() == task.getTitle()) {
            tasks.erase(it);
        }
    }
}

void List::print_tasks() {
    for (auto &task: tasks) {
        std::cout << "Titolo: " << task.getTitle() << std::endl;
        std::cout << "Descrizione: " << task.getDescription() << std::endl;
        std::cout << "Scadenza: " << task.getDueDate() << std::endl;
        std::cout << "Completato: " << (task.is_completed() ? "Si" : "No") << std::endl;
        std::cout << std::endl;
    }
}

int List::task_counter() {
    int counter = 0;
    for (auto &task: tasks) {
        counter++;
    }
    return counter;
}

void List::mark_completed(Task task) {
    if (task.is_completed() == false)
        task.completed = true;
}

int List::completed_counter() {
    int completed = 0;
    int uncompleted = 0;
    for (auto &task: tasks) {
        if (task.is_completed())
            completed++;
    }
    return completed;
}

void List::mod_task_title(Task &task, const std::string &new_title) {
    task.setTitle(new_title);
}


void List::mod_task_desc(Task &task, const std::string &new_desc) {
    task.setDescription(new_desc);
}

void List::mod_task_duedate(Task &task, const Date &new_date) {
    task.setDueDate(new_date);
}

Task List::find_by_name(const std::string &name) {
    for (auto task: tasks) {
        if (task.title == name) {
            task.print_task();
            return task;
        }
    }
}

int List::find_by_date(const Date &date) {
    int found = 0;
    for (auto task: tasks) {
        if (task.getDueDate() == date) {
            found++;
            task.print_task();
        }
    }
    return found;
}











