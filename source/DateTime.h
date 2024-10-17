#ifndef DATETIME_H
#define DATETIME_H
#include "Date.h"
#include "Time.h"
class DateTime : public Date, public Time{
public:
    DateTime() : Date(), Time() {}
    DateTime(int d, int month, int y, int h, int m, int s): Date(d, month, y), Time(h, m, s) {}
    ~DateTime(){}
     string to_string() {
        Date::to_string();
        Time::to_string();
     }
void display(){
    Date:: display();
    Time:: display();
}
};
#endif