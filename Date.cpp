//
// Created by sorin on 27/03/2023.
//
#include "Date.h"
#include <string>
#include <iostream>

Date::Date() {}

Date::Date(int d, int m, int y)
{
    if (is_valid(d, m, y)) {
        day = d;
        month = m;
        year = y;
    }
};


bool Date::is_valid(int d, int m, int y) {
    return d >= 1 && d <= 31 && m >= 1 && m <= 12 && y >= 0;
}

std::string Date::short_format() const {
    return std::to_string(day) + "/" +
           std::to_string(month) + "/" +
           std::to_string(year);
}

void Date::print_Date(Date d) {
    std::cout << "Data: " << d.short_format() << std::endl;
}

Date Date::gives_Date(Date d) {
    return d;
}

int Date::get_day() const { return day; }

int Date::get_month() const { return month; }

int Date::get_year() const { return year; }

bool Date::equal_to(Date other) {
    return day == other.day && month == other.month && year == other.year;
}

bool Date::operator==(const Date &other) {
    return day == other.day && month == other.month && year == other.year;
}

bool Date::operator<(const Date &other) {
    if (year < other.year)
        return true;
    else {
        if (year == other.year)
            if (month < other.month)
                return true;
            else {
                if (month == other.month)
                    if (day < other.day)
                        return true;
            }
        return false;
    }
}

bool Date::operator>(const Date &other) {
    if (year > other.year)
        return true;
    else {
        if (year == other.year)
            if (month > other.month)
                return true;
            else {
                if (month == other.month)
                    if (day > other.day)
                        return true;
            }
        return false;
    }
}

bool Date::leap_year(int _year) {
    if (_year % 4 == 0) {
        if (_year % 100 == 0) {
            if (_year % 400 == 0) {
                return true;
            } else { return false; }
        } else { return true; }
    } else { return false; }
}

int Date::days_month(int _month, int _year) {
    switch (_month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;

        case 2:
            return Date::leap_year(_year) ? 29 : 28;
            break;

        default:
            return 0;
            break;
    }
}


Date Date::operator++(int dummy) {
    Date d = *this; //l'incremento suffisso deve prima ritornare prima della modifica
    day++;


    if (day > days_month(month, year)) {
        month++;
        day = 1;
    }
    if (month > 12) {
        year++;
        month = 1;
        day = 1;
    }
    return d;
}

//overload <<
std::ostream &operator<<(std::ostream &stream, const Date &d) {
    stream << d.day << " - " << d.month << " - " << d.year;
    return stream;
}

//conversion overload
Date::operator std::string() const {
    return short_format();
}






