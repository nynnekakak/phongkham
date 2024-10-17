#ifndef TIME_H
#define TIME_H
#include <iomanip>
#include<iostream>
using namespace std;
class Time
{
protected:
    int h,m,s;
public:
    Time(int h=1, int m=1, int s=1) : h(h), m(m), s(s){}
    ~Time(){}
    string to_string() const {
        return to_string(h) + ":" + to_string(m) + ":" + to_string(s);
    }
    void display () {
        cout << h<< ": "<< m <<":" <<s<<endl;
    }
};
#endif
