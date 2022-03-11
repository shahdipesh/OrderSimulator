//
// Created by Dipesh Asd on 2022-03-09.
//

#include "Order.h"
#include "Menu.h"
#include <utility>
#include "iostream"
using namespace std;

Order::Order(int timeStamp, int expTime, string mealName, int numIngredients) : timeStamp(timeStamp), expTime(expTime),
                                                                         mealName(mealName),
                                                                         numIngredients(numIngredients) {
    Menu *m = new Menu;
    this->price=m->getFoodPrice(mealName,numIngredients);
    this->timeRequired=m->getPreparationTime(mealName,numIngredients);

}
int Order::getTimeStamp() const {
    return timeStamp;
}

void Order::setTimeStamp(int id) {
    Order::timeStamp = id;
}

int Order::getExpTime() const {
    return expTime;
}

void Order::setExpTime(int expTime) {
    Order::expTime = expTime;
}

const string &Order::getMealName() const {
    return mealName;
}

void Order::setMealName(string mealName) {
    Order::mealName = mealName;
}

int Order::getNumIngredients() const {
    return numIngredients;
}

void Order::setNumIngredients(int numIngredients) {
    Order::numIngredients = numIngredients;
}

float Order::getPrice() const {
    return this->price;
}


int Order::getTimeRequired() const {
  return this->timeRequired;
}

void Order::setTimeRequired(int timeRequired) {
    Order::timeRequired = timeRequired;
}

void Order::printDetails() {
    cout<<"Expiry: "<<this->expTime<<" - Meal: "<<this->mealName<<" - Ingredients: "<<this->numIngredients<<" - Prep.time: "<<this->timeRequired<<" - Price:"<<this->getPrice()<<endl;

}

