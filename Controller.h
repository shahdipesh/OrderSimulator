//
// Created by Dipesh Asd on 2022-03-10.
//

#pragma once
#include <string>


using namespace std;

class FileReaderHelper;

class Controller {
public:
    void handleMessage(int id,int expiryTime,string mealName,int numIngredients,int version,FileReaderHelper *fileReaderHelper);
};



