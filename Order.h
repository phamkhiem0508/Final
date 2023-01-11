//
// Created by Khiêm Phạm on 11/01/2023.
//

#ifndef FINAL_ORDER_H
#define FINAL_ORDER_H

#include "IDGenerator.h"
#include "string"
#include "vector"

using namespace std;

class Order {
private:
    string customerID;
    string doctorID;
    string orderID;
    string orderDate;
    double price;

public:
    // constructor
    Order();

    Order(string customerID, string doctorID, string orderDate, double price);

    //Methods

    void setOrderID(string newOrderID);

    string getOrderID();

    string getCustomerID();

    double getPrice();

    void setCustomerID(string newCustomerID);

    string getDoctorID();

    void setDoctorID(string newDoctorID);

    string getOrderDate();

    void setOrderDate(string newOrderDate);

    void generateID(string fileName);

    void writeOrderToFile();

    void updateOrderInFile(string id, Order newOrder);

    void deleteOrderFromFile(string id);
};


#endif //FINAL_ORDER_H
