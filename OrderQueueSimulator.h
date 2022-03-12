//
// Created by Dipesh Asd on 2022-03-10.
//

#pragma once


#include "Queue.h"
#include "Simulation.h"


class OrderQueueSimulator: public Simulation {
private:
    LinkedList *listOfEvents;
    int itemsInQueue;
    int currentTime;
    int currentNumOfCompletedOrders;
    float totalRevenue;

public:
    OrderQueueSimulator();
    void handleOrderEvent(Event *event,LinkedList *eventList) override;


private:
    void handleArrivalEvent(Event *event,LinkedList *eventList);
    void handleCompleteEvent(Event *event,LinkedList *eventList);
};


