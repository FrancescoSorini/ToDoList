//
// Created by sorin on 21/03/2023.
//

#include "User.h"

User::User() {}

User::User(const std::string &name) : username{name} {}

const std::string &User::getUsername() const {
    return username;
}

void User::add_list(const List &list) {
    lists.push_back(list);
}

void User::remove_list(const List &list) {
    for (std::vector<List>::iterator it = lists.begin(); it != lists.end(); ++it) {
        if (it->getTitle() == list.getTitle()) {
            lists.erase(it);
        }
    }
}


int User::list_counter() {
    int counter = 0;
    for (auto &list: lists) {
        counter++;
    }
    return counter;
}

void User::print_a_list(const List &list) const {
    std::cout << list.getTitle() << std::endl;
    std::cout << "---------------------------" << std::endl;
    list.print_tasks();
    std::cout << "---------------------------" << std::endl;
    std::cout << "Task completate: " << list.completed_counter() << std::endl;
    std::cout << "Task da completare: " << list.task_counter() - list.completed_counter() << std::endl;
    std::cout << "---------------------------" << std::endl;
}










