//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <stdlib.h>
#include <time.h>
#include <stdexcept>

#include "FileManager.h"
using namespace std;

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    try {
        /* initialize random seed: */
        srand (time(NULL));
        int randomNumberV1 = rand() % 500;
        int randomNumberV2 = rand() % 59 + 100;

        PhysicalProduct physicalProduct;
        physicalProduct.setName("PS5 Game: call of duty");
        physicalProduct.setWeight(randomNumberV1);
        physicalProduct.setPrice(randomNumberV2);

        // Manager SRP
        FileManager fileManager;

        // This function will save the information of the
        // Physical Product in a file with the name games.txt
        fileManager.save(physicalProduct,  "games.txt");

        // This function read a text file by line
        string fileTextByLine = fileManager.readByLine("games.txt");

        // This function read a text file by full content in one sentence
        string fileTextByContent = fileManager.readByContent("games.txt");

        cout << "[FILE TEXT READ BY LINE]" << endl;
        cout << fileTextByLine << endl;

        cout << "[FILE TEXT READ BY CONTENT]" << endl;
        cout << fileTextByContent << endl;
    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}