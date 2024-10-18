#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time {
public:
    DateTime() : Date(), Time() {} 
    DateTime(int d, int month, int y, int h, int m, int s)
        : Date(d, month, y), Time(h, m, s) {}
    string to_string() const {
        return Date::to_string() + " " + Time::to_string();
    }
    void display() const {
        Date::display();
        Time::display();
    }
     static DateTime fromString(const string& dateTimeStr) {
        stringstream ss(dateTimeStr);
        string token;
        getline(ss, token, ' ');
        Date date = Date::fromString(token);
        getline(ss, token, ' ');
        Time time = Time::fromString(token);
        DateTime dt;
        dt.day = date.day;
        dt.month = date.month;
        dt.year = date.year;
        dt.h = time.h;
        dt.m = time.m;
        dt.s = time.s;

        return dt;
    }
    ~DateTime() {}
};

#endif // DATETIME_H
