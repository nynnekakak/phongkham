#include "Contact.h"
#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>    
using namespace std;
bool kiemTraSoDienThoai(const string& phonenumber) {
     if (phonenumber.length() == 11) 
    {
        for (int i=0;i<phonenumber.length();i++)
        {
            if(phonenumber[i]>'9'||phonenumber[i]<'0') return false;
        }
    }
    else return false;
      return true;
}
bool kiemTraEmail(const string& email) {
    const string duoiEmail = "@gmail.com";
    if (email.length() >= duoiEmail.length()) {
        return email.substr(email.length() - duoiEmail.length()) == duoiEmail;
    }
    return false;
}

