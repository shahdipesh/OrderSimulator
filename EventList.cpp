//
// Created by Dipesh Asd on 2022-03-10.
//

#include "EventList.h"
#include "PriorityQueue.h"
#include "iostream"
#include "OrderHandler.h"
#include "FileReaderHelper.h"
#include "OrderQueue.h"

EventList::EventList() : eventList(new PriorityQueue) {}

LinkedList *EventList::getEventList() {
    return eventList;
}

void EventList::processEvent(FileReaderHelper *fileReaderHelper) {
    OrderQueue *orderQueue = new OrderQueue();
    while((eventList->isEmpty())!=1) {
        Node *removedNode = this->getEventList()->remove();
        Event *removedEvent = removedNode->getData();
        OrderHandler *orderHandler = new OrderHandler;
        orderHandler->insert(removedEvent);
        orderHandler->processOrder(this->eventList,fileReaderHelper,orderQueue);
    }

}
