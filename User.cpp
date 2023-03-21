//
// Created by sorin on 21/03/2023.
//

#include "User.h"

User::User() {}

User::User(const std::string &name) : username{name} {}

const std::string &User::getUsername() const {
    return username;
}



