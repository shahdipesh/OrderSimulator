//
// Created by Dipesh Asd on 2022-03-09.
//

#ifndef UNTITLED17_EVENT_H
#define UNTITLED17_EVENT_H
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

    Event( string type, Order *orderDetails, int simulation, int time);

    string getType();

    void setType(string type);

    Order *getOrderDetails() const;

    void setOrderDetails(Order *orderDetails);

    int getTime() const;

    void setTime(int time);

    int getSimulation();

    void setSimulation(int simulation);

};


#endif //UNTITLED17_EVENT_H