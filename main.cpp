#include <iostream>
using namespace std;
#include "Doctor.h"

int main() {
    Doctor d9("Louis 9999", "123 Main St", "555-555-5555", "Surgeon", "12345");
    d9.writeDoctorToFile();

    Doctor d8("Louis", "123 Main St", "555-555-5555", "Surgeon", "22345");
    d8.writeDoctorToFile();

    Doctor d6("Louis", "123 Main St", "555-555-5555", "Surgeon", "32345");
    d6.writeDoctorToFile();

    Doctor d7("John Doe", "123 Main St", "555-555-5555", "Surgeon", "112345");

    d7.updateDoctorInFile("ID4",d9);

    d7.deleteDoctorFromFile("ID5");


}