//
// Created by Dipesh Asd on 2022-03-07.
//

#ifndef UNTITLED17_FILEREADERHELPER_H
#define UNTITLED17_FILEREADERHELPER_H


#include <fstream>
#include <string>

using namespace std;

class FileReaderHelper {

private:
    int version;
public:
     FileReaderHelper(int argc, char* argv[]);
    int readNextLineFromFile(std::string line);
};


#endif //UNTITLED17_FILEREADERHELPER_H
