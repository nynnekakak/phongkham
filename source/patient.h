#ifndef PATIENT_H
#define PATIENT_H

#include "DateTime.h"
#include "Contact.h"
#include <string>
#include <vector>
using namespace std;

class Patient {
protected:
    string name, gender, notes;
    int age, ID;
    Date dob;          // Ngày sinh
    DateTime a;        // Ngày hẹn khám
    Contact contact;  
public:
    Patient();
    Patient& setInfo(string name, string gender, string notes, int age, int ID, Date dob, DateTime a, Contact contact);
    string getInfo() const;

    static void loadFromFile(const string& fileName="patient.txt");
    void saveToFile(const string& fileName="patient.txt");
    static void findBenhNhan(const string& ID);
    static void deleteBenhNhan(const string& ID);
    static void chinhSuaBenhNhan(const string& ID);
    static void xuatDuLieuCSV(const string& tenFile="check.txt");
    static void sapXepBenhNhan();
    void display() const;
     ~Patient();
};

#endif
