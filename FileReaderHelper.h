//
// Created by Dipesh Asd on 2022-03-07.
//

#pragma once


#include <fstream>
#include <string>
#include "Event.h"

using namespace std;

class FileReaderHelper {

private:
    int version;
public:
     FileReaderHelper(int argc, char* argv[]);
    int readNextLineFromFile(std::string line);
    Event *createNewEventFromNextLine(string line,int simulation);
};


