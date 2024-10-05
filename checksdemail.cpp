#include <iostream>
#include <string>
#include <algorithm> // Thý vi?n cho all_of
#include <cctype>    // Thý vi?n cho isdigit
using namespace std;

// Hàm ki?m tra s? ði?n tho?i có ð? 11 s? không
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

// Hàm ki?m tra email có ðúng ðuôi @gmail.com không
bool kiemTraEmail(const string& email) {
    const string duoiEmail = "@gmail.com";
    if (email.length() >= duoiEmail.length()) {
        return email.substr(email.length() - duoiEmail.length()) == duoiEmail;
    }
    return false;
}

int main() {
    string soDienThoai, email;

    // Nh?p s? ði?n tho?i và email
    cout << "Nhap so dien thoai: ";
    cin >> soDienThoai;
    cout << "Nhap email: ";
    cin >> email;

    // Ki?m tra s? ði?n tho?i và email
    if (kiemTraSoDienThoai(soDienThoai)) {
        cout << "So dien thoai hop le." << endl;
    } else {
        cout << "So dien thoai khong hop le." << endl;
    }

    if (kiemTraEmail(email)) {
        cout << "Email hop le." << endl;
    } else {
        cout << "Email khong hop le." << endl;
    }

    return 0;
}

