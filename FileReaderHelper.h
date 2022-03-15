// CLASS: FileReaderHelper
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: This class handles how to read line from the file and gives a method which can be called to generate method based on
//          next line
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
    //Constructor
     FileReaderHelper(int argc, char* argv[]);
    int readNextLineFromFile(std::string line);
    Event *createNewEventFromNextLine(string line,int simulation);
    int hasNextLine();
};


