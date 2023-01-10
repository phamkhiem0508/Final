//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_IDGENERATOR_H
#define FINAL_IDGENERATOR_H


#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include "string"

using namespace std;


class IDGenerator {
public:
    IDGenerator(string filename);
    ~IDGenerator();
    string generate();

private:
    string m_filename;
    int m_counter;
};

IDGenerator::IDGenerator(string filename): m_filename(filename), m_counter(0) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        string id;
        istringstream iss(line);
        getline(iss, id, ',');

        cout <<id << endl;
    }
    file.close();
    m_counter++;
}

IDGenerator::~IDGenerator() {
    ofstream file(m_filename, ios::app);
    file.close();
}

string IDGenerator::generate() {
    string id = "ID" + to_string(m_counter++);
    ofstream file(m_filename, ios::app);
    file << id << endl;
    file.close();
    return id;
}

#endif //FINAL_IDGENERATOR_H
