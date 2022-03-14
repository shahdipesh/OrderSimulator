// CLASS: Menu
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Stores the Menu table given to us
//
#pragma once
#include <string>

using namespace std;

class Menu {

public:
    float getFoodPrice(string mealName,int numIngredients);
  int getPreparationTime(string mealName,int numIngredients);
};

