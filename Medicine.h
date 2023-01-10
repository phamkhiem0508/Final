//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_MEDICINE_H
#define FINAL_MEDICINE_H

#include "string"

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

};


#endif //FINAL_MEDICINE_H
