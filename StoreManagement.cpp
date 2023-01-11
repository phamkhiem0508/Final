//
// Created by Khiêm Phạm on 10/01/2023.
//

#include "StoreManagement.h"
StoreManagement::StoreManagement() {};

//void StoreManagement::checkDoctorSalary() {
//    string line;
//    vector<string> lines;
//    ifstream file("doctors.txt");
//    ifstream ordersFile("orders.txt");
//
//    if (file.is_open()) {
//        while (getline(file, line)) {
//            string id;
//            istringstream iss(line);
//            getline(iss, id, ',');
//
//            if(id.find("ID")== 2)
//
////            if (line.find(id + ",") != string::npos) {
////                line = id + "," + newDoctor.getName() + "," + newDoctor.getAddress() + "," +
////                       newDoctor.getPhoneNumber() + "," + newDoctor.getSpeciality() + "," +
////                       newDoctor.getLicenseNumber() + "," + to_string(newDoctor.getSalary());
////            }
//        }
//        file.close();
//    } else {
//        cout << "Unable to open file";
//    }
//
//    ofstream outfile("doctors.txt");
//    for (const auto &line: lines) {
//        outfile << line << endl;
//    }
//    outfile.close();
//}