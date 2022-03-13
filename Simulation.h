//
// Created by Dipesh Asd on 2022-03-11.
//

#pragma once

#include "Event.h"
#include "LinkedList.h"

class Simulation {

public:
    Simulation(LinkedList *linkedList);
    void handleOrderEvent(Event *event,LinkedList *eventList);

private:
    LinkedList *listOfEvents;
    int itemsInQueue;
    int currentTime;
    int currentNumOfCompletedOrders;
    float totalRevenue;
    void handleArrivalEvent(Event *event,LinkedList *eventList);
    void handleCompleteEvent(Event *event,LinkedList *eventList);
};

