//
// Created by Khiêm Phạm on 10/01/2023.
//
#include "Doctor.h"

// Constructor
Doctor::Doctor() : Person() {
    speciality = "";
    licenseNumber = "";
}

Doctor::Doctor(string name, string address, string phoneNumber, string speciality, string licenseNumber) : Person(name,
                                                                                                                  address,
                                                                                                                  phoneNumber) {
    this->speciality = speciality;
    this->licenseNumber = licenseNumber;
    if (licenseNumber.length() > 0) {
        int firstNum = licenseNumber[0] - 48;
        this->salary = 500 * firstNum;
    }
}

// Methods
string Doctor::getSpeciality() {
    return speciality;
}

string Doctor::getLicenseNumber() {
    return licenseNumber;
}

void Doctor::setSpeciality(string newSpeciality) {
    speciality = newSpeciality;
}

void Doctor::setLicenseNumber(string newLicenseNumber) {
    licenseNumber = newLicenseNumber;
}

double Doctor::getSalary() {
    return this->salary;
}

void Doctor::writeDoctorToFile() {
    ofstream file;
    file.open("doctors.txt", ios::app); // open the file in append mode
    if (file.is_open()) {
        this->generateID("doctors.txt");
        file << this->getID() << ","
             << this->getName() << ","
             << this->getAddress() << ","
             << this->getPhoneNumber() << ","
             << this->getSpeciality() << ","
             << this->getLicenseNumber() << ","
             << this->getSalary() << endl;
        file.close();
    } else {
        cout << "Unable to open file";
    }
}

void Doctor::updateDoctorInFile(string id, Doctor newDoctor) {
    string line;
    vector<string> lines;
    ifstream file("doctors.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            if (line.find(id + ",") != string::npos) {
                line = id + "," + newDoctor.getName() + "," + newDoctor.getAddress() + "," +
                       newDoctor.getPhoneNumber() + "," + newDoctor.getSpeciality() + "," +
                       newDoctor.getLicenseNumber() + "," + to_string(newDoctor.getSalary());
            }
            lines.push_back(line);
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }

    ofstream outfile("doctors.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}

void Doctor::deleteDoctorFromFile(string id) {
    string line;
    vector<string> lines;
    ifstream file("doctors.txt");
    if (file.is_open()) {
        while (getline(file, line)) {

            if (line.find(id + ",") == string::npos) {
                lines.push_back(line);
            }
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }

    ofstream outfile("doctors.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}
