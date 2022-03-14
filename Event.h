// CLASS: CompletionEvent
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Defines the Completion Event
//
//-----------------------------------------

#pragma once
#include <string>
#include "Order.h"

using namespace std;

class Event {

private:
    string type;
    Order *orderDetails;
    int simulation;
    int time;
public:

    //Constructor
    Event( string type, Order *orderDetails, int simulation, int time);

    string getType(); //getter for type of event

    void setType(string type);

    Order *getOrderDetails() const; //getter for order

    void setOrderDetails(Order *orderDetails);

    int getTime();  //getter for time

    void setTime(int time);

    int getSimulation(); //getter for the simulation type for the event

    void setSimulation(int simulation);

};

