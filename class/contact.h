#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class Contact {
private:
    string phoneNumber;
    string email;
public:
    Contact(string phoneNumber = "", string email = "");
    string getPhoneNumber() const;
    string getEmail() const;
    void displayContact() const;
    void saveToFile(ofstream& file) const;
};

#endif
