#include "Contact.h"
#include <string>
#include<iostream>
#include <algorithm> 
#include <cctype>    
using namespace std;
Contact::Contact(string phoneNumber, string email) 
    : phoneNumber(phoneNumber), email(email) {}
 bool Contact::getPhoneNumber(const string   &phonenumber) const {  
    if (phonenumber.length() == 10) 
    {
        for (int i=0;i<phonenumber.length();i++)
        {
            if(phonenumber[i]>'9'||phonenumber[i]<'0') return false;
        }
    }
    else return false;
      return true;
}
bool Contact:: getEmail(const string&email) const{
     const string duoiEmail = "@gmail.com";
    if (email.length() > duoiEmail.length()) {
        return email.substr(email.length() - duoiEmail.length()) == duoiEmail;
    }
    return false;
}

void Contact::displayContact() const {
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
}
void Contact::saveToFile(ofstream& file) const {
    file << "Phone Number: " << phoneNumber << "   "<< "Email: " << email << endl;
}
string  Contact:: to_string() const {
        return "Phone: " + phone + ", Email: " + email;
    }
static Contact::Contact fromString(const string& contactStr) {
        stringstream ss(contactStr);
        string token;
        Contact contact;
        getline(ss, token, ',');
        contact.phone = token;
        getline(ss, token, ',');
        contact.email = token;
        return contact;
    }
