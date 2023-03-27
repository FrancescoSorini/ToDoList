//
// Created by sorin on 27/03/2023.
//

#ifndef TASK_H_DATE_H
#define TASK_H_DATE_H

#include <string>

class Date {

public:
    Date();
    Date(int d, int m, int y);


    //getter
    std::string short_format() const;
    Date gives_Date(Date d);
    int get_day() const;
    int get_month() const;
    int get_year() const;


    //altre funzioni
    bool is_valid(int d, int m, int y);
    void print_Date(Date d);
    bool equal_to(Date);
    static bool leap_year(int);
    static int days_month(int, int);


    //operators overload
    bool operator==(const Date &);  //uso una const reference per eventuali utilizzi di confronto su tipi non std
    bool operator<(const Date &);
    bool operator>(const Date &);
    Date operator++(int);
    friend std::ostream &operator<<(std::ostream &, const Date &);
    explicit operator std::string() const;


private:
    int day, month, year;
};

std::ostream &operator<<(std::ostream &, const Date &);

#endif //TASK_H_DATE_H
