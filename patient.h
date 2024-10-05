#ifndef     Patient_h
#define     Patient_h

#include "date.h"
#include "Time.h"
#include "contact.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Patient {
private:
    string name,gender, Notes;  
    int age,ID;   
    Date dob; 
    Date appointmentDate;  
    Time appointmentTime;  
    Contact contact;           


public:
    Patient();
    ~Patient();
    void setinfor(string n, int a, string g, string notes);
    void getinfor() const;
    void display() const;
};
#endif