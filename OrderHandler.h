// CLASS: OrderHandler
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Handles a given order passed to the class from Order controller
//
#pragma once


#include "Event.h"
#include "LinkedList.h"
#include "FileReaderHelper.h"
#include "OrderQueueSimulator.h"

class OrderHandler {
private:
    LinkedList *orderToHandleList;
public:
    OrderHandler();
    void insert(Event *e);
    void processOrder(LinkedList *eventList,FileReaderHelper *fileReaderHelper,Simulation *simulation);

};

