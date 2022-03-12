//
// Created by Dipesh Asd on 2022-03-10.
//

#include "EventList.h"
#include "PriorityQueue.h"
#include "iostream"
#include "FileReaderHelper.h"
#include "OrderQueue.h"
#include "OrderStack.h"
#include "OrderHandler.h"

EventList::EventList() : eventList(new PriorityQueue) {}

LinkedList *EventList::getEventList() {
    return eventList;
}

void EventList::processEvent(FileReaderHelper *fileReaderHelper) {
    OrderHandler *orderHandler = new OrderHandler;
    Simulation *orderQueueSimulator = new OrderQueue;
    Simulation *orderStackSimulator = new OrderStack;
    while((eventList->isEmpty())!=1) {
        Node *removedNode = this->getEventList()->remove();
        Event *removedEvent = removedNode->getData();

        orderHandler->insert(removedEvent);
        if(removedEvent->getSimulation()==1) {
            orderHandler->processOrder(this->eventList, fileReaderHelper, orderQueueSimulator);
        }
        else if (removedEvent->getSimulation()==2){
            orderHandler->processOrder(this->eventList, fileReaderHelper, orderStackSimulator);
        }
    }

}
