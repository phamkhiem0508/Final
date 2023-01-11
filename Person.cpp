//
// Created by Khiêm Phạm on 10/01/2023.
//

#include "Person.h"

Person::Person() {};

Person::Person(string name, string address, string phoneNumber) {
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

string Person::getName() {
    return this->name;
}

string Person::getAddress() {
    return this->address;
}

string Person::getPhoneNumber() {
    return this->phoneNumber;
}

string Person::getID() {
   return this->id;
}

void Person::generateID(string fileName) {
    IDGenerator id(fileName);
    this->id = id.generate();

}

void Person::setName(string newName) {
    this->name = newName;
}

void Person::setAddress(string newAddress) {
    this->name = newAddress;
}

void Person::setPhoneNumber(string newPhoneNumber) {
    this->name = newPhoneNumber;
}