//
// Created by Khiêm Phạm on 10/01/2023.
//

#include "iostream"
#include "Patient.h"

Patient::Patient() : Person() {
    insuranceProvider = "";
    medicalHistory = "";
}

Patient::Patient(string name, string address, string phoneNumber, string insuranceProvider, string medicalHistory) : Person(name, address, phoneNumber) {
    this->insuranceProvider = insuranceProvider;
    this->medicalHistory = medicalHistory;
}

string Patient::getInsuranceProvider() {
    return insuranceProvider;
}

string Patient::getMedicalHistory() {
    return medicalHistory;
}

void Patient::setInsuranceProvider(string newInsuranceProvider) {
    insuranceProvider = newInsuranceProvider;
}

void Patient::setMedicalHistory(string newMedicalHistory) {
    medicalHistory = newMedicalHistory;
}

void Patient::writePatientToFile() {
    ofstream file;
    file.open("patients.txt", ios::app); // open the file in append mode
    if (file.is_open()) {
        this->generateID("patients.txt");
        file << this->getID() << ","
             << this->getName() << ","
             << this->getAddress() << ","
             << this->getPhoneNumber() << ","
             << this->getInsuranceProvider() << ","
             << this->getMedicalHistory() << endl;
        file.close();
    } else {
        cout << "Unable to open file";
    }
}

void Patient::updatePatientInFile(string id, Patient newPatient) {
    string line;
    vector<string> lines;
    ifstream file("patients.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            if (line.find(id + ",") != string::npos) {
                line = id + "," + newPatient.getName() + "," + newPatient.getAddress() + "," +
                       newPatient.getPhoneNumber() + "," + newPatient.getInsuranceProvider() + "," +
                       newPatient.getMedicalHistory();
            }
            lines.push_back(line);
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }

    ofstream outfile("patients.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}

void Patient::deletePatientFromFile(string id) {
    string line;
    vector<string> lines;
    ifstream file("patients.txt");
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

    ofstream outfile("patients.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}