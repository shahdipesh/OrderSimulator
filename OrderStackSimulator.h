//
// Created by Dipesh Asd on 2022-03-11.
//

#ifndef UNTITLED17_ORDERSTACKSIMULATOR_H
#define UNTITLED17_ORDERSTACKSIMULATOR_H


#include "LinkedList.h"
#include "Simulation.h"
#include "Stack.h"

class OrderStackSimulator: public Simulation {

    private:
        LinkedList *listOfEvents;
        int itemsInQueue;
        int currentTime;
        int currentNumOfCompletedOrders;
        float totalRevenue;

    public:
        OrderStackSimulator();
        void handleOrderEvent(Event *event,LinkedList *eventList) override;

    private:
        void handleArrivalEvent(Event *event,LinkedList *eventList);
        void handleCompleteEvent(Event *event,LinkedList *eventList);

};


#endif //UNTITLED17_ORDERSTACKSIMULATOR_H
