//
// Created by Dipesh Asd on 2022-03-10.
//

#ifndef UNTITLED17_MENU_H
#define UNTITLED17_MENU_H
#include <string>

using namespace std;

class Menu {

public:
    float getFoodPrice(string mealName,float numIngredients);
  int getPreparationTime(string mealName,int numIngredients);
};


#endif //UNTITLED17_MENU_H
