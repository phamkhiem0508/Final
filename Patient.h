//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_PATIENT_H
#define FINAL_PATIENT_H

#include "Person.h"
#include "fstream"
#include "vector"

class Patient :  public Person {
protected:
    string insuranceProvider;
    string medicalHistory;

public:
    // Constructor
    Patient();

    Patient(string name, string address, string phoneNumber, string insuranceProvider, string medicalHistory);

    //Methods
    string getInsuranceProvider();

    string getMedicalHistory();

    void setInsuranceProvider(string newInsuranceProvider);

    void setMedicalHistory(string newMedicalHistory);

    void writePatientToFile();

    void updatePatientInFile(string id, Patient newPatient);

    void deletePatientFromFile(string id);
};


#endif //FINAL_PATIENT_H
