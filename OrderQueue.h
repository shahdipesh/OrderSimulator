//
// Created by Dipesh Asd on 2022-03-10.
//

#ifndef UNTITLED17_ORDERQUEUE_H
#define UNTITLED17_ORDERQUEUE_H


#include "Queue.h"

class OrderQueue {
private:
    LinkedList *listOfEvents;
    int itemsInQueue;
    int currentTime;
    int currentNumOfCompletedOrders;
public:
    OrderQueue();
    void handleOrderEvent(Event *event);

private:
    void handleArrivalEvent(Event *event);
    void handleCompleteEvent(Event *event);
};


#endif //UNTITLED17_ORDERQUEUE_H
