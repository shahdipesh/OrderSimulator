//
// Created by Dipesh Asd on 2022-03-10.
//

#pragma once


#include "LinkedList.h"

class EventList {
private:
    LinkedList *eventList;
public:
    EventList(); //constructor

    void processEvent();

    LinkedList *getEventList() ; //getter

};


