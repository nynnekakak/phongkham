#include "Date.h"
#include  "Time.h"
#include "Contact.h"
#include "patient.h"
#include<iostream>
using namespace std;
Patient& Patient::setInfo(string name, string gender, string notes, int age, int ID, 
                 Date dob, DateTime  a, Contact contact) {
        this->name = name;
        this->gender = gender;
        this->notes = notes;
        this->age = age;
        this->ID = ID;
        this->dob = dob;
        this->a=a;
        this->contact = contact;
        return  *this;
    }
string Patient::getInfo() const {
        string info = "Name: " + name + " "
                      + "Gender: " + gender + " "
                      + "Age: " + to_string(age) + " "
                      + "ID: " + to_string(ID) + " "
                      + "DOB: " + dob.to_string();
                      + "Appointment Date: " + a.to_string() + " "
                      + "Notes: " + notes + " "
                      + "contact" + contact.to_string() + " "; // Thêm thông tin liên lạc
        return info;
    }
void Patient:: saveToFile(const string& fileName) const {
        ofstream outFile(fileName); 
        if (outFile.is_open()) {
            outFile << getInfo(); 
            outFile.close();      
            cout << "Data saved to " << fileName << endl;
        } else {
            cout << "Unable to open file " << fileName << endl;
        }
    }
void Patient:: display(const string& fileName) const {
          ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error: Unable to open file " << fileName << endl;
        return;
    }
    cout << "Patient Information:\n";
    cout << "---------------------\n";
    string line;
    string content;
    while (getline(inFile, line)) {
        content += line +" ";
    }
    cout<<content<< endl;
    inFile.close();
