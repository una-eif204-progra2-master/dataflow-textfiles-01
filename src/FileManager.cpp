//
// Created by Maikol Guzman Alan on 3/16/22.
//

#include "FileManager.h"

/**
 * This function save data into Text File
 * @param physicalProduct the object to save in the text file
 * @param fileName the name of the text file
 */
void FileManager::save(const PhysicalProduct &physicalProduct, const string &fileName) {

    // Create and open a text file
    ofstream myFile(fileName, ios_base::app);

    // Write to the file
    myFile << physicalProduct.toString() << endl;

    // Close the file
    myFile.close();
}

/**
 * Read a text file line by line
 * @param filename the name of the file
 * @return the string of the concatenate line text
 */
string FileManager::readByLine(const string &filename) {

    // Create a text string, which is used to output the text file
    string myTextLine;
    string myText;

    // Read from the text file
    ifstream myReadFile(filename);

    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + filename + "]");
    }

    // Use a while loop together with the getline() function to readByLine the file line by line
    while (getline (myReadFile, myTextLine)) {
        // Output the text from the file
        myText = myText + myTextLine + "\n\r";
    }

    // Close the file
    myReadFile.close();

    return myText;
}

/**
 * Read a text file full content in only one sentence
 * @param filename the name of the file
 * @return the full text content
 */
string FileManager::readByContent(const string &filename) {
    // Create a text string, which is used to output the text file
    string content;

    // Read from the text file
    ifstream myReadFile(filename);
    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + filename + "]");
    }

    // With this line you can read the full content of a text file
    // https://en.cppreference.com/w/cpp/iterator/istreambuf_iterator
    content.assign((istreambuf_iterator<char>(myReadFile)),
                   (istreambuf_iterator<char>()));

    return content;
}
