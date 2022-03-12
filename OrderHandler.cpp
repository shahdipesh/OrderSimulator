//
// Created by Dipesh Asd on 2022-03-10.
//

#include "OrderHandler.h"
#include "Queue.h"
#include "iostream"
#include "OrderQueue.h"
#include "FileReaderHelper.h"

OrderHandler::OrderHandler() : orderToHandleList(new Queue) {}

void OrderHandler::insert(Event *e) {
    this->orderToHandleList->insert(e);

}

void OrderHandler::processOrder(LinkedList *eventList,FileReaderHelper *fileReaderHelper,Simulation *simulation) {
    Node *removedNode = this->orderToHandleList->remove();
    Event *removedEvent = removedNode->getData();


        simulation->handleOrderEvent(removedEvent,eventList);
        Event *newEventToAdd = fileReaderHelper->createNewEventFromNextLine("",removedEvent->getSimulation());
        //check if there are further texts in the file
        if(newEventToAdd!=nullptr) {
            eventList->insert(newEventToAdd);
        }




}
