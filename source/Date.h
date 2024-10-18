#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;
class Date
{
protected:
    int Day,Month,Year;
public:
    Date():Day(1),Month(1),Year(1){}
    Date   (int day = 1, int month = 1, int year = 2024): Day(day), Month(month), Year(year){}
    string to_string() const {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
    void display() {
        cout << day<< "/ "<< month <<"/" << year<<endl;
    }
    ~Date();
};
#endif

