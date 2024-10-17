#ifndef     Patient_h
#define     Patient_h
#include "DateTime.h"
#include "contact.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Patient {
private:
    string name,gender, notes;  
    int age,ID;   
    Date dob; 
    DateTime a;  
    Contact contact;           
public:
    Patient (){}
    Patient  (string name, string gender, string notes, int age, int ID, 
            Date dob, DateTime a, Contact contact) 
        : name(name), gender(gender), notes(notes), age(age), ID(ID), 
          dob(dob), a(a), contact(contact) {}
    ~Patient();
    Patient     setinfor (string name, int age, string gender, string notes,Date dob, DateTime a, Contact contact)  const {}
    string      getinfor() const;
    void        display();
};
#endif