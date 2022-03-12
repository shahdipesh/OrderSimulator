//
// Created by Dipesh Asd on 2022-03-11.
//

#pragma once

#include "Event.h"
#include "LinkedList.h"

class Simulation {
public:

    virtual void handleOrderEvent(Event *event,LinkedList *eventList)=0;
};

