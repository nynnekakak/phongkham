#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
using namespace std;

class Time
{
protected:
    int h, m, s; // Giờ, phút, giây

public:
    Time() : h(1), m(1), s(1) {}
    Time(int h, int m, int s) : h(h), m(m), s(s) {}
    string to_string() const {
        return to_string(h) + ":" + to_string(m) + ":" + to_string(s);
    }
     static Time fromString(const string& timeStr) {
        Time t;
        stringstream ss(timeStr);
        char colon=':';
        ss >> t.h >> colon >> t.m >> colon >> t.s;  
        return t;
    }
    void display() const {
        cout << h << ":" << m << ":" << s << endl;
    }
    ~Time() {}
};

#endif // TIME_H

