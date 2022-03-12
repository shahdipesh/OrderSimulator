//
// Created by Dipesh Asd on 2022-03-10.
//

#include "EventList.h"
#include "PriorityQueue.h"
#include "FileReaderHelper.h"
#include "OrderQueueSimulator.h"
#include "OrderStackSimulator.h"
#include "OrderHandler.h"
#include "OrderProfitSimulator.h"
#include "iostream"

EventList::EventList() : eventList(new PriorityQueue) {}

LinkedList *EventList::getEventList() {
    return eventList;
}

void EventList::processEvent(FileReaderHelper *fileReaderHelper) {
    OrderHandler *orderHandler = new OrderHandler;
    Simulation *orderQueueSimulator = new OrderQueueSimulator;
    Simulation *orderStackSimulator = new OrderStackSimulator;
    Simulation *orderProfitSimulator = new OrderProfitSimulator;
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
        else if (removedEvent->getSimulation()==3){
            orderHandler->processOrder(this->eventList, fileReaderHelper, orderProfitSimulator);
        }
        else{
            cout<<"Invalid Simulation Type"<<endl;


        }
    }

}
