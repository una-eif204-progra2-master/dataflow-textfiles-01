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
    /**
     * This function save data into Text File
     * @param physicalProduct the object to save in the text file
     * @param fileName the name of the text file
     */
    static void save(const PhysicalProduct& physicalProduct, const string& fileName);

    /**
     * Read a text file line by line
     * @param filename the name of the file
     * @return the string of the concatenate line text
     */
    static string readByLine(const string& filename);

    /**
     * Read a text file full content in only one sentence
     * @param filename the name of the file
     * @return the full text content
     */
    static string readByContent(const string& filename);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
