//
// Created by Khiêm Phạm on 10/01/2023.
//

#include "StoreManagement.h"
StoreManagement::StoreManagement() {};

void StoreManagement::checkDoctorSalary() {
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