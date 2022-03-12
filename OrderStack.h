//
// Created by Dipesh Asd on 2022-03-11.
//

#ifndef UNTITLED17_ORDERSTACK_H
#define UNTITLED17_ORDERSTACK_H


#include "LinkedList.h"
#include "Simulation.h"
#include "Stack.h"

class OrderStack: public Simulation {

    private:
        Stack *listOfEvents;
        int itemsInQueue;
        int currentTime;
        int currentNumOfCompletedOrders;
        float totalRevenue;

    public:
        OrderStack();
        void handleOrderEvent(Event *event,LinkedList *eventList) override;
        void print() override;

    private:
        void handleArrivalEvent(Event *event,LinkedList *eventList);
        void handleCompleteEvent(Event *event,LinkedList *eventList);

};


#endif //UNTITLED17_ORDERSTACK_H
