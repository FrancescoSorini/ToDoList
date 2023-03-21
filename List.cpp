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
    for (std::vector<Task>::iterator it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->getTitle() == task.getTitle()) {
            tasks.erase(it);
        }
    }
}

void List::print_tasks() {
    for (std::vector<Task>::iterator it = tasks.begin(); it != tasks.end(); ++it) {
        std::cout << "Titolo: " << it->getTitle() << std::endl;
        std::cout << "Descrizione: " << it->getDescription() << std::endl;
        std::cout << "Completato: " << (it->is_completed() ? "Si" : "No") << std::endl;
        std::cout << std::endl;
    }
}


