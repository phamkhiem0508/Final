//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_DOCTOR_H
#define FINAL_DOCTOR_H
#include "Person.h"
#include "string"

using namespace std;

class Doctor : public Person {
private:
    string speciality;
    string licenseNumber;
    double salary;
public:
    // Constructor
    Doctor();

    Doctor(string name, string address, string phoneNumber, string speciality, string licenseNumber);


    // Methods

    string getSpeciality();

    string getLicenseNumber();

    double getSalary();

    void setSpeciality(string newSpeciality);

    void setLicenseNumber(string newLicenseNumber);

    void writeDoctorToFile();

    void updateDoctorInFile(string id,Doctor newDoctor);

    void deleteDoctorFromFile(string id);
};


#endif //FINAL_DOCTOR_H