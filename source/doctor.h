#ifndef DOCTOR_H
#define DOCTOR_H

#include "DateTime.h"
#include "Contact.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Doctor {
protected:
    string name;
    DateTime appointmentDate;
    Contact contact;

public:
    // Constructor và Destructor
    Doctor(string name = "", DateTime a = DateTime(), Contact contact = Contact());
    ~Doctor();

    // Set thông tin bác sĩ
    Doctor& setInfo(string name, DateTime a, Contact contact);

    // Lấy thông tin bác sĩ
    string getInfo() const;

    // Lưu thông tin bác sĩ vào file
    void saveToFile(const string& fileName = "doctor.txt") const;

    // Hiển thị thông tin bác sĩ
    void display() const;

    // Hàm load từ file (static)
    static void loadFromFile(const string& fileName = "doctor.txt");

    // Hàm lưu danh sách bác sĩ vào file (static)
    static void saveToFile(const vector<Doctor>& doctors, const string& fileName = "doctor.txt");
};

#endif
