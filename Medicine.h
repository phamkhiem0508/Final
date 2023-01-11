//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_MEDICINE_H
#define FINAL_MEDICINE_H

#include "string"
#include "IDGenerator.h"
#include "vector"

using namespace std;


class Medicine {
protected:
    string name;
    double price;
    int quantity;
    string manufacturer;
    string expirationDate;
    bool prescriptionRequired;
    string type;
    string dosage;
    string medicineID;
public:
    //constructor
    Medicine();

    Medicine(string name, double price, int quantity, string manufacturer, string expirationDate,
             bool prescriptionRequired, string type, string dosage);

    //Methods
    string getName();

    double getPrice();

    int getQuantity();

    string getManufacturer();

    string getExpirationDate();

    bool isPrescriptionRequired();

    string getDosage();

    string getType();

    void operator-=(unsigned int quantity);

    void operator+=(unsigned int quantity);

    void writeMedicineToFile();

    void generateID(string fileName);

    string getMedicineID();

    void updateMedicineInFile(string id, Medicine newMedicine);

    void deleteMedicineFromFile(string id);

};


#endif //FINAL_MEDICINE_H
