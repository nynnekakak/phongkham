#include "Room.h"
#include <iostream>
using namespace std;

// Constructor mặc định
Room::Room(int id, Doctor doctor, Patient patient, bool available)
    : roomID(id), doctor(doctor), patient(patient), isAvailable(available), next(nullptr) {}

// Set thông tin bác sĩ và bệnh nhân
void Room::setDoctor(const Doctor& doc) {
    doctor = doc;
}

void Room::setPatient(const Patient& pat) {
    patient = pat;
}

// Thay đổi bác sĩ
void Room::changeDoctor(const Doctor& newDoctor) {
    doctor = newDoctor;
    cout << "Doctor updated." << endl;
}

// Thay đổi bệnh nhân
void Room::changePatient(const Patient& newPatient) {
    patient = newPatient;
    cout << "Patient updated." << endl;
}

// Lấy thông tin bác sĩ và bệnh nhân
Doctor Room::getDoctor() const {
    return doctor;
}

Patient Room::getPatient() const {
    return patient;
}

// Lấy tình trạng phòng
bool Room::getAvailability() const {
    return isAvailable;
}

// Thay đổi tình trạng phòng
void Room::setAvailability(bool status) {
    isAvailable = status;
    if (status) {
        cout << "Room is now available." << endl;
    } else {
        cout << "Room is occupied." << endl;
    }
}

// Lấy con trỏ phòng tiếp theo
Room* Room::getNext() const {
    return next;
}

void Room::setNext(Room* nextRoom) {
    next = nextRoom;
}

// Hiển thị thông tin phòng bệnh
void Room::displayRoomInfo() const {
    cout << "Room ID: " << roomID << endl;
    cout << "Doctor Information: " << endl;
    doctor.display();
    cout << "Patient Information: " << endl;
    patient.display();
    cout << "Room availability: " << (isAvailable ? "Available" : "Occupied") << endl;
}

// Destructor
Room::~Room() {
    cout << "Room " << roomID << " destroyed." << endl;
}
