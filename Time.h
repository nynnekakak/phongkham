#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <fstream>
#include <iomanip>  
using namespace std;
class Time {
private:
    int hour, minute;

public:
    Time(int hour = 0, int minute = 0);
    void displayTime() const;
    void saveToFile(ofstream& file) const;
};

#endif
