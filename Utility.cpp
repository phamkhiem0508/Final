#include "Utility.h"

template<typename T>
vector<T> Utility::readFromFile(string fileName) {
    vector<T> objects;
    string line;
    ifstream file(fileName);
    if (file.is_open()) {
        while (getline(file, line)) {
            stringstream linestream(line);
            T object = T::fromCSV(linestream);
            objects.push_back(object);
        }
        file.close();
    } else {

        cout << "Unable to open file" << endl;
    }
    return objects;
}

template<typename T>
void Utility::writeToFile(string fileName, string data) {
    ofstream outfile(fileName);
    outfile << data << endl;
    outfile.close();
}

template<typename T>
void Utility::deleteFromFile(string fileName, string id) {
    vector<T> objects = readFromFile<T>(fileName);
    auto newEnd = remove_if(objects.begin(), objects.end(),
                                 [id](const T &object) { return object.getID() == id; });
    objects.erase(newEnd, objects.end());
    writeToFile<T>(fileName, objects);
}

template<typename T>
void Utility::updateFromFile(string fileName, T updatedObject) {
    vector<T> objects = readFromFile<T>(fileName);
    replace_if(objects.begin(), objects.end(),
                    [updatedObject](const T &object) { return object.getID() == updatedObject.getID(); },
                    updatedObject);
    writeToFile<T>(fileName, objects);
}