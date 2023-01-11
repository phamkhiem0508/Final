#include "Order.h"

Order::Order() {

}

Order::Order( string customerID, string doctorID, string orderDate,double price)
{
    this->customerID = customerID;
    this->doctorID = doctorID;
    this->orderDate = orderDate;
    this->price=price;
}

void Order::generateID(string fileName) {
    IDGenerator order(fileName);
    this->setOrderID(order.generate());
}

void Order::setOrderID(string newOrderID) {
    this->orderID = newOrderID;
}

string Order::getOrderID() {
    return this->orderID;
}

string Order::getCustomerID() {
    return customerID;
}

void Order::setCustomerID(string newCustomerID) {
    this->customerID = newCustomerID;
}

string Order::getDoctorID() {
    return doctorID;
}

void Order::setDoctorID(string newDoctorID) {
    this->doctorID = newDoctorID;
}

string Order::getOrderDate() {
    return orderDate;
}

void Order::setOrderDate(string newOrderDate) {
    this->orderDate = newOrderDate;
}

double Order::getPrice() {
    return this->price;
}

void Order::writeOrderToFile() {
    ofstream file;
    file.open("orders.txt", ios::app); // open the file in append mode
    if (file.is_open()) {
        this->generateID("orders.txt");
        file << this->getOrderID() << ","
             << this->getCustomerID() << ","
             << this->getDoctorID() << ","
             << this->getPrice() << ","
             << this->getOrderDate() << endl;
        file.close();
    } else {
        cout << "Unable to open file";
    }
}

void Order::updateOrderInFile(string id, Order newOrder) {
    string line;
    vector<string> lines;
    ifstream file("orders.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            if (line.find(id + ",") != string::npos) {
                line = id + "," + newOrder.getDoctorID() + "," + newOrder.getCustomerID() + "," +
                       newOrder.getDoctorID() + "," + to_string(newOrder.getPrice()) + "," + newOrder.getOrderDate() ;
            }
            lines.push_back(line);
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }

    ofstream outfile("orders.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}

void Order::deleteOrderFromFile(string id) {
    string line;
    vector<string> lines;
    ifstream file("orders.txt");
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

    ofstream outfile("orders.txt");
    for (const auto &line: lines) {
        outfile << line << endl;
    }
    outfile.close();
}


