//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_PATIENT_H
#define FINAL_PATIENT_H

#include "Person.h"

class Patient : public Person {
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
};


#endif //FINAL_PATIENT_H
