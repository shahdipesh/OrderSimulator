//
// Created by Dipesh Asd on 2022-03-10.
//

#include "EventList.h"
#include "PriorityQueue.h"
#include "iostream"
#include "OrderHandler.h"

EventList::EventList() : eventList(new PriorityQueue) {}

LinkedList *EventList::getEventList() {
    return eventList;
}

void EventList::processEvent() {

    while((eventList->isEmpty())!=1) {
        Node *removedNode = this->getEventList()->remove();
        Event *removedEvent = removedNode->getData();
        OrderHandler *orderHandler = new OrderHandler;
        orderHandler->insert(removedEvent);
        orderHandler->processOrder();
        //call processOrder of order handler

    }

}
