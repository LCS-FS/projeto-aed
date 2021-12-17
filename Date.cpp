#include "Date.h"
#include "sstream"

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

Date::Date(int day,int  month,int year){
    this->day = day;
    this->month = month;
    this->year = year;
}
void Date::setDate(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}
bool const Date::operator<(const Date d2) const {
    if(year == d2.getYear()){
        if(month == d2.getMonth()) return day < d2.getMonth();
        return month < d2.getMonth();
    }
    return year<d2.getYear();
}

bool const Date::operator==(const Date d2) const{
    return year == d2.getYear() && month == d2.getMonth() && day == d2.getDay();
}

Date::Date() {
    this->day = 31;
    this->month = 12;
    this->year = 3000;
}

string Date::write() const {
    stringstream oss;
    oss << year << " " << month << " " << day;
    return oss.str();
}