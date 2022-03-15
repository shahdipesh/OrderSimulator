//
// Created by Dipesh Asd on 2022-03-10.
//

#include "OrderHandler.h"
#include "Queue.h"
#include "OrderQueueSimulator.h"
#include "FileReaderHelper.h"

OrderHandler::OrderHandler() : orderToHandleList(new Queue) {}

void OrderHandler::insert(Event *e) {
    this->orderToHandleList->insert(e);

}

// PURPOSE:  Send the order to the Simulation class and fetch the new order from the list
// PARAMETERS:
//    LinkedList *eventList: We will add a new event to the list once we are done processing a order
//    FileReaderHelper *fileReaderHelper: We use "createNewEventFromNextLine" method to create a event to insert.
//    Simulation *simulation: We keep inserting the events in the same list of the simulation so we need to maintain a reference to the list
//                              to insert inside it in future
void OrderHandler::processOrder(LinkedList *eventList,FileReaderHelper *fileReaderHelper,Simulation *simulation) {
    Node *removedNode = this->orderToHandleList->remove();
    Event *removedEvent = removedNode->getData();


        simulation->handleOrderEvent(removedEvent,eventList,fileReaderHelper);
        Event *newEventToAdd = fileReaderHelper->createNewEventFromNextLine("",removedEvent->getSimulation());
        //check if there are further texts in the file
        if(newEventToAdd!=nullptr) {
            eventList->insert(newEventToAdd);
        }




}
