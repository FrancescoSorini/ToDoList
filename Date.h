//
// Created by sorin on 27/03/2023.
//

#ifndef TASK_H_DATE_H
#define TASK_H_DATE_H

#include <string>

class Date {
    //INTERFACCIA
public:
    //costruttore
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

    friend std::ostream &operator<<(std::ostream &, const Date &); //rendo friend questa funzione cosi che solo lei
    //possa accedere a dati privati come funz esterna alla classe

    //overload per la conversione dati
    //con l'explicit chiedo che la conversione sia sempre esplicita per evitare errori
    explicit operator std::string() const;


    //IMPLEMENTAZIONE
private:
    int day, month, year;
};

//ostream operator overload
//ritorno una reference cosi che possa concatenare più istruzioni con << (es. cout << data1 << "eeeee" << data2;)
//invece di dover ogni volta scrivere cout << (es. cout << data1; cout << "eeee"; cout << data2;)
std::ostream &operator<<(std::ostream &, const Date &);

#endif //TASK_H_DATE_H
