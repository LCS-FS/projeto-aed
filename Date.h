#ifndef PROJETO_AED_DATE_H
#define PROJETO_AED_DATE_H

#include "string"

using namespace std;

class Date {
private:
    int day;
    int year;
    int month;
public:
    Date(); //default 31-12-3000
    int getDay() const;

    void setDay(int day);

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    Date(int day,int  month,int year);

    void setDate(int day, int month, int year);
    bool const operator<(const Date d2) const;
    bool const operator==(const Date d2) const;

    string write() const;

};


#endif //PROJETO_AED_DATE_H
