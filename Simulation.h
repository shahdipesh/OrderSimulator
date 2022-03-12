//
// Created by Dipesh Asd on 2022-03-11.
//

#ifndef UNTITLED17_SIMULATION_H
#define UNTITLED17_SIMULATION_H

#include "Event.h"
#include "LinkedList.h"

class Simulation {
public:
    virtual void print()=0;
   virtual void handleOrderEvent(Event *event,LinkedList *eventList)=0;
};


#endif //UNTITLED17_SIMULATION_H
