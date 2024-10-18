#ifndef ROOM_H
#define ROOM_H

#include "Doctor.h"
#include "Patient.h"
#include <string>
using namespace std;

class Room {
private:
    int roomID;  // Mã phòng bệnh
    Doctor doctor;  // Bác sĩ trong phòng
    Patient patient;  // Bệnh nhân trong phòng
    bool isAvailable;  // Tình trạng phòng (true = có bệnh nhân, false = trống)
    Room* next;  // Con trỏ đến phòng tiếp theo trong danh sách

public:
    // Constructor mặc định
    Room(int id = 0, Doctor doctor = Doctor(), Patient patient = Patient(), bool available = true);

    // Set thông tin bác sĩ và bệnh nhân
    void setDoctor(const Doctor& doctor);
    void setPatient(const Patient& patient);

    // Thay đổi bác sĩ và bệnh nhân
    void changeDoctor(const Doctor& newDoctor);
    void changePatient(const Patient& newPatient);

    // Lấy thông tin bác sĩ và bệnh nhân
    Doctor getDoctor() const;
    Patient getPatient() const;

    // Lấy và thay đổi tình trạng phòng
    bool getAvailability() const;
    void setAvailability(bool status);

    // Lấy con trỏ phòng tiếp theo
    Room* getNext() const;
    void setNext(Room* nextRoom);

    // Hiển thị thông tin phòng bệnh
    void displayRoomInfo() const;

    // Destructor
    ~Room();
};

#endif  // ROOM_H
