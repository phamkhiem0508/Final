//
// Created by Khiêm Phạm on 10/01/2023.
//


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
