//
// Created by sorin on 21/03/2023.
//

#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H

#include <string>

class Task {
public:
    Task();

    explicit Task(const std::string &title, bool completed);

    const std::string &getTitle() const;

    void setDescription(const std::string &description);

    const std::string &getDescription() const;

    bool is_completed();

    void mark_completed();


private:
    std::string title;
    std::string description;
    bool completed;
};

#endif //TODOLIST_TASK_H
