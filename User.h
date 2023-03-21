//
// Created by sorin on 21/03/2023.
//

#ifndef TODOLIST_USER_H
#define TODOLIST_USER_H

#include <string>
#include <vector>


class User {
public:
    User();

    explicit User(const std::string &name);

    const std::string &getUsername() const;


private:
    std::string username;
};


#endif //TODOLIST_USER_H
