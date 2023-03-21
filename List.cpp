//
// Created by sorin on 21/03/2023.
//

#include "List.h"

List::List(const std::string &title) : title(title) {}

List::List() {}

const std::string &List::getTitle() const {
    return title;
}
