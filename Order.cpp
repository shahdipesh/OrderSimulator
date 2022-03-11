//
// Created by Dipesh Asd on 2022-03-09.
//

#include "Order.h"
#include "Menu.h"
#include <utility>
using namespace std;

Order::Order(int id, int expTime, string mealName, int numIngredients) : id(id), expTime(expTime),
                                                                                mealName(mealName),
                                                                                numIngredients(numIngredients) {
    Menu *m = new Menu;
    this->price=m->getFoodPrice(mealName,numIngredients);
    this->timeRequired=m->getPreparationTime(mealName,numIngredients);

}
int Order::getId() const {
    return id;
}

void Order::setId(int id) {
    Order::id = id;
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
