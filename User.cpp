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

void User::print_all_lists() {
    for (std::vector<List>::iterator it = lists.begin(); it != lists.end(); ++it) {
        std::cout << "Lista: " << it->getTitle() << std::endl;
        std::cout << "---------------------------" << std::endl;
        it->print_tasks();
        std::cout << "---------------------------" << std::endl;
    }
}

int User::list_counter() {
    int counter = 0;
    for (auto &list: lists) {
        counter++;
    }
    return counter;
}








