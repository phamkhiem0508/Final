//
// Created by Khiêm Phạm on 10/01/2023.
//

#include "Medicine.h"


Medicine::Medicine() {};

Medicine::Medicine(string name, double price, int quantity, string manufacturer, string expirationDate,
                   bool prescriptionRequired, string type, string dosage) : name(name), price(price),
                                                                            quantity(quantity),
                                                                            manufacturer(manufacturer),
                                                                            expirationDate(expirationDate),
                                                                            prescriptionRequired(prescriptionRequired),
                                                                            type(type), dosage(dosage) {}

string Medicine::getName() {
    return this->name;
};

double Medicine::getPrice(){
    return this->price;
};

int Medicine::getQuantity(){
    return this->quantity;
};

string Medicine::getManufacturer(){
    return this->manufacturer;
};

string Medicine::getExpirationDate(){
    return this->expirationDate;
};

bool Medicine::isPrescriptionRequired(){
    return this->prescriptionRequired;
};

string Medicine::getDosage(){
    return this->dosage;
};

string Medicine::getType(){
    return this->type;
};

void Medicine::operator-=(unsigned int quantity){
    if (quantity > this->quantity)
        this->quantity = 0;
    else
        this->quantity -= quantity;
};

void Medicine::operator+=(unsigned int quantity){
    this->quantity += quantity;
};