//
// Created by Dipesh Asd on 2022-03-09.
//

#pragma once

#include <string>

using namespace std;

class Order {

private:
    int id;
   int timeStamp;
   int expTime;
   string mealName;
   int numIngredients;
   float price;
   int timeRequired;

public:
    Order(int id, int expTime, string mealName, int numIngredients);

    void printDetails();

    int getId() const;

    void setId(int id);

    void setPrice(float price);

    int getTimeStamp() const;

    void setTimeStamp(int id);

    int getExpTime() const;

    void setExpTime(int expTime);

    const string &getMealName() const;

    void setMealName(string mealName);

    int getNumIngredients() const;

    void setNumIngredients(int numIngredients);

    float getPrice() const;


    int getTimeRequired() const;

    void setTimeRequired(int timeRequired);



};


