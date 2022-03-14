//
// Created by Dipesh Asd on 2022-03-10.
//

#include "Menu.h"

// PURPOSE:  Get food price based on the name of the meal and number of ingredients in it.
// PARAMETERS:
//  string mealName: name of the meal
//  float numIngredients: number of ingre
// Returns: The total price of the meal
float Menu::getFoodPrice(string mealName, int numIngredients) {
   float basePrice =0;
   float finalPrice=0;
   if(mealName=="Salad"){
       basePrice=6.99;
       finalPrice=basePrice+numIngredients;
   }
   else if(mealName=="Burger"){
       basePrice=8.99;
       finalPrice= basePrice+numIngredients;
   }
   else if(mealName=="Pizza"){
       basePrice=12.99;
       finalPrice= basePrice+numIngredients;
   }
   else if(mealName=="Stew"){
       basePrice=14.99;
       finalPrice= basePrice+numIngredients;
   }
   else{
       finalPrice=-1;
   }
   return finalPrice;
}

// PURPOSE:  Get food preparation time based on mealname and number of ingredients
// PARAMETERS:
//  string mealName: name of the meal
//  int numIngredients: number of ingredients
// Returns: The total time taken to prepare the meal
int Menu::getPreparationTime(string mealName, int numIngredients) {
    int result =0;
    int baseTime =0;
    int finalTime=0;
    if(mealName=="Salad"){
        baseTime=3;
        finalTime=baseTime+numIngredients;
    }
    else if(mealName=="Burger"){
        baseTime=4;
        finalTime= baseTime+numIngredients;
    }
    else if(mealName=="Pizza"){
        baseTime=6;
        finalTime= baseTime+numIngredients;
    }
    else if(mealName=="Stew"){
        baseTime=7;
        finalTime= baseTime+numIngredients;
    }
    else{
        finalTime=-1;
    }
    return finalTime;
}
