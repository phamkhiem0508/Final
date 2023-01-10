//
// Created by Khiêm Phạm on 10/01/2023.
//

#ifndef FINAL_IDGENERATOR_H
#define FINAL_IDGENERATOR_H


#include <iostream>
#include <fstream>
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

        if(id.find("ID") == 0) {
            int idNum = stoi(id.substr(2)); // convert the string ID to int, assuming the pattern is "ID"+number
            m_counter = max(m_counter, idNum);
        }

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
    return id;
}

#endif //FINAL_IDGENERATOR_H
