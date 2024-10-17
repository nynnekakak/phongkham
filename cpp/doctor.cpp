#include "Date.h"
#include  "Time.h"
#include "Contact.h"
#include "doctor.h"
#include<iostream>
using namespace std;
Doctor& Doctor::setInfo(string name, DateTime  a, Contact contact) {
        this->name = name;
        this->a=a;
        this->contact = contact;
        return  *this;
    }
string Doctor::getInfo() const {
        string info = "Name: " + name + " "
                      + "Appointment Date: " + a.to_string() + " "
                      + "contact" + contact.to_string() + " "; // Thêm thông tin liên lạc
        return info;
    }
void Doctor:: saveToFile(const string& fileName) const {
        ofstream outFile(fileName); 
        if (outFile.is_open()) {
            outFile << getInfo(); 
            outFile.close();      
            cout << "Data saved to " << fileName << endl;
        } else {
            cout << "Unable to open file " << fileName << endl;
        }
    }
void Doctor::display(const string& fileName ) const {
        ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error: Unable to open file " << fileName << endl;
        return;
    }
    cout << "Doctor Information:\n";
    cout << "---------------------\n";
    string line;
    string content;
    while (getline(inFile, line)) {
        content += line +" ";
    }
    cout<<content<< endl;
    inFile.close();
}
