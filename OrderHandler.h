//
// Created by Dipesh Asd on 2022-03-10.
//

#pragma once


#include "Event.h"
#include "LinkedList.h"
#include "FileReaderHelper.h"
#include "OrderQueue.h"

class OrderHandler {
private:
    LinkedList *orderToHandleList;
public:
    OrderHandler();
    void insert(Event *e);
    void processOrder(LinkedList *eventList,FileReaderHelper *fileReaderHelper,Simulation *simulation);

};

