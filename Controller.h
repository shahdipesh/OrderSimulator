// CLASS: Controller
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: When we fetch a new line from the file we need to do certain things
//
//-----------------------------------------

#pragma once
#include <string>
using namespace std;

class FileReaderHelper;

class Controller {
public:
    //Constructor for the class
    void handleMessage(int id,int expiryTime,string mealName,int numIngredients,int version,FileReaderHelper *fileReaderHelper);
};



