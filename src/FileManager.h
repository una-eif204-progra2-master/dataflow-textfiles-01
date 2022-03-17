//
// Created by Maikol Guzman Alan on 3/16/22.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H
#include <string>
#include <iostream>
#include <fstream>
#include "PhysicalProduct.h"

using namespace std;

class FileManager {
public:
    static void save(const PhysicalProduct& physicalProduct, const string& fileName);
    static string readByLine(const string& filename);
    static string readByContent(const string& filename);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
