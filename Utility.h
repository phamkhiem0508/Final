#ifndef FINAL_UTILITY_H
#define FINAL_UTILITY_H

#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

class Utility {
public:
    template<typename T>
    static vector<T> readFromFile(string fileName);

    template<typename T>
    static void writeToFile(string fileName, vector<T> objects);

    template<typename T>
    static void deleteFromFile(string fileName, string id);

    template<typename T>
    static void updateFromFile(string fileName, T updatedObject);
};
#endif //FINAL_UTILITY_H
