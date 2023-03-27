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
        std::cout << "Scadenza: " << task.get_due_date() << std::endl;
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


