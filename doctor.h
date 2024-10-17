#ifndef DOCTOR_H
#define DOCTOR_H
#include "DateTime.h"
#include "Contact.h"
#include <string>
using namespace std;
class doctor {
private:
    string Name;
    string phonenumber;
    Date appointmentDate;  
    Time appointmentTime;  
    Contact contact;     
public: 
    Doctor();
    ~Doctor();
    void display();
    
}