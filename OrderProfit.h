//
// Created by Dipesh Asd on 2022-03-12.
//

#pragma once
#include "Simulation.h"
#include "PriorityQueue.h"
#include "ProfitQueue.h"

class OrderProfit:public Simulation {

private:
    ProfitQueue *listOfEvents;
    int itemsInQueue;
    int currentTime;
    int currentNumOfCompletedOrders;
    float totalRevenue;

public:
    OrderProfit();
    void handleOrderEvent(Event *event,LinkedList *eventList) override;
    void print() override;

private:
    void handleArrivalEvent(Event *event,LinkedList *eventList);
    void handleCompleteEvent(Event *event,LinkedList *eventList);


};


