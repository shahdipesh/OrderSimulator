//
// Created by Dipesh Asd on 2022-03-10.
//

#ifndef UNTITLED17_ORDERQUEUE_H
#define UNTITLED17_ORDERQUEUE_H


#include "Queue.h"
#include "Simulation.h"


class OrderQueue: public Simulation {
private:
    LinkedList *listOfEvents;
    int itemsInQueue;
    int currentTime;
    int currentNumOfCompletedOrders;
    float totalRevenue;

public:
    OrderQueue();
    void handleOrderEvent(Event *event,LinkedList *eventList) override;
    void print() override;

private:
    void handleArrivalEvent(Event *event,LinkedList *eventList);
    void handleCompleteEvent(Event *event,LinkedList *eventList);
};


#endif //UNTITLED17_ORDERQUEUE_H
