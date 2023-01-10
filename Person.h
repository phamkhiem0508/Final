//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_PERSON_H
#define FINAL_PERSON_H

#include "string"

using namespace std;

class Person {
protected:
    string name;
    string address;
    string phoneNumber;
public:
    //Constructor
    Person();

    Person(string name, string address, string phoneNumber);

    //Methods
    string getName();

    string getAddress();

    string getPhoneNumber();

    void setName(string newName);

    void setAddress(string newName);

    void setPhoneNumber(string newName);
};


#endif //FINAL_PERSON_H
