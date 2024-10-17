#ifndef DOCTOR_H
#define DOCTOR_H
#include "DateTime.h"
#include "Contact.h"
#include <string>
using namespace std;
class Doctor {
protected:
    string Name;
    DateTime a;
    Contact contact;     
public: 
    Doctor(string name, DateTime a, Contact contact) 
        : name(name),,a(a), contact(contact) {};
    ~Doctor(){}
    Doctor& setinfor (string name,  DateTime a, Contact contact)  const {}
    string      getinfor() const{}
    void    saveToFile(const string& fileName="doctor.txt") const {}
    void    display(){}
}