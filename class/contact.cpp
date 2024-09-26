#include "Contact.h"
#include<iostream>
using namespace std;
Contact::Contact(string phoneNumber, string email) 
    : phoneNumber(phoneNumber), email(email) {}
string Contact::getPhoneNumber() const {
    return phoneNumber;
}

string Contact::getEmail() const {
    return email;
}

void Contact::displayContact() const {
    cout << "Phone Number: " << phoneNumber << endl;
   cout << "Email: " << email << endl;
}
void Contact::saveToFile(ofstream& file) const {
    file << "Phone Number: " << phoneNumber << endl;
    file << "Email: " << email << endl;
}
