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

#endif //FINAL_IDGENERATOR_H
