//
// Created by Maikol Guzman Alan on 3/16/22.
//

#include "FileManager.h"

void FileManager::save(const PhysicalProduct &physicalProduct, const string &fileName) {

    // Create and open a text file
    ofstream myFile(fileName, ios_base::app);

    // Write to the file
    myFile << physicalProduct.toString() << endl;

    // Close the file
    myFile.close();
}

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

string FileManager::readByContent(const string &filename) {
    // Create a text string, which is used to output the text file
    string content;

    // Read from the text file
    ifstream myReadFile(filename);
    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + filename + "]");
    }

    content.assign((istreambuf_iterator<char>(myReadFile)),
                   (istreambuf_iterator<char>()));

    return content;
}
