// CLASS: Simulation
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: This class is where majority of the tasks happen based on the event we get
//
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

