//
// Created by sorin on 21/03/2023.
//

#ifndef TODOLIST_LIST_H
#define TODOLIST_LIST_H

#include <string>
#include <vector>

class List {
public:
    List();

    explicit List(const std::string &title);

    const std::string &getTitle() const;

public:

private:
    std::string title;
};

#endif //TODOLIST_LIST_H
