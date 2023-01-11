#include <iostream>
using namespace std;
#include "Doctor.h"
#include "Order.h"
#include "Patient.h"
#include "Medicine.h"


int main() {
    Doctor d9("Louis 9999", "123 Main St", "555-555-5555", "Surgeon", "12345");
    d9.writeDoctorToFile();

    Doctor d8("Mai", "123 Main St", "555-555-5555", "Surgeon", "22345");
    d8.writeDoctorToFile();

    Doctor d6("An", "123 Main St", "555-555-5555", "Surgeon", "32345");
    d6.writeDoctorToFile();

    Doctor d7("John Doe", "123 Main St", "555-555-5555", "Surgeon", "112345");

    Patient p1("Huy","999 An St","111-111-1111","Bao Viet","2022");
    p1.writePatientToFile();

    Patient p2("Tien","999 An St","111-111-1111","Bao Viet","2022");
    p1.writePatientToFile();

    Patient p3("Quang","999 An St","111-111-1111","Bao Viet","2022");
    p1.writePatientToFile();

    Medicine m1("Thuoc ho",40,10,"Ha Noi","2023-12-09",true,"Vien nen","2 lan 1 ngay");
    m1.writeMedicineToFile();

    Medicine m2("Thuoc ngu",40,10,"Ha Noi","2023-12-09",true,"Vien nen","2 lan 1 ngay");
    m2.writeMedicineToFile();

    Medicine m3("Thuoc dau bung",40,10,"Ha Noi","2023-12-09",true,"Vien nen","2 lan 1 ngay");
    m3.writeMedicineToFile();

    Medicine m4("Thuoc dau mat",40,10,"Ha Noi","2023-12-09",true,"Vien nen","2 lan 1 ngay");
    m4.writeMedicineToFile();

    Order o1("ID2","ID1","2023-15-06",90);
    o1.writeOrderToFile();

    Order o2("ID3","ID2","2023-15-06",190);
    o2.writeOrderToFile();

    Order o3("ID4","ID3","2023-15-06",890);
    o3.writeOrderToFile();





}