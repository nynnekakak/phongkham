#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <fstream>
#include <iomanip>  // Thư viện để format output
using namespace std;
class Date {
private:
    int day, month, year;

public:
    Date(int day = 1, int month = 1, int year = 2024);
    void displayDate() const;
    void saveToFile(ofstream& file) const;
};

#endif