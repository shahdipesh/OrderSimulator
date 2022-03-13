//
// Created by Dipesh Asd on 2022-03-10.
//

#pragma once
#include <string>

using namespace std;

class Menu {

public:
    float getFoodPrice(string mealName,float numIngredients);
  int getPreparationTime(string mealName,int numIngredients);
};

