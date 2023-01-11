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

void Medicine::generateID(string fileName) {
    IDGenerator medicineID(fileName);
    this->medicineID = medicineID.generate();
}

string Medicine::getMedicineID() {
    return this->medicineID;
}

void Medicine::writeMedicineToFile() {
    ofstream file;
    file.open("medicines.txt", ios::app); // open the file in append mode
    if (file.is_open()) {
        this->generateID("medicines.txt");
        file << this->getMedicineID() << ","
             << this->getName() << ","
             << this->getManufacturer() << ","
             << this->getPrice() << ","
             << this->getType() << ","
             << this->getExpirationDate() << ","
             << this->getDosage() << ","
             << this->getQuantity() << endl;
        file.close();
    } else {
        cout << "Unable to open file";
    }
}

void Medicine::updateMedicineInFile(string id, Medicine newMedicine) {
    string line;
    vector<string> lines;
    ifstream file("medicines.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            if (line.find(id + ",") != string::npos) {
                line = id  + "," + newMedicine.getName() + "," +
                       newMedicine.getManufacturer() + "," + to_string(newMedicine.getPrice()) + "," +
                       newMedicine.getType() + "," + newMedicine.getExpirationDate() + "," + newMedicine.getDosage() + "," + to_string(newMedicine.getQuantity()) ;
            }
            lines.push_back(line);
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }

    ofstream outfile("medicines.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}

void Medicine::deleteMedicineFromFile(string id) {
    string line;
    vector<string> lines;
    ifstream file("medicines.txt");
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

    ofstream outfile("medicines.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}