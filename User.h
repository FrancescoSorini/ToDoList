//
// Created by sorin on 21/03/2023.
//

#ifndef TODOLIST_USER_H
#define TODOLIST_USER_H

#include <string>
#include <vector>
#include <iostream>
#include "List.h"


class User {
public:
    User();

    explicit User(const std::string &name);

    const std::string &getUsername() const;

    void add_list(const List &list);

    void remove_list(const List &list);

    //stampa una delle liste, anche quanti task e quanti da completare
    void print_a_list(const List &list) const;

    int list_counter();

private:
    std::string username;
    std::vector<List> lists;

    friend class List;
};


#endif //TODOLIST_USER_H
