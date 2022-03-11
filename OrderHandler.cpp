//
// Created by Dipesh Asd on 2022-03-10.
//

#include "OrderHandler.h"
#include "Queue.h"
#include "iostream"

OrderHandler::OrderHandler() : orderToHandleList(new Queue) {}

void OrderHandler::insert(Event *e) {
    this->orderToHandleList->insert(e);

}

void OrderHandler::processOrder() {
    Node *removedNode = this->orderToHandleList->remove();
    Event *removedEvent = removedNode->getData();

    //Create order queue
    //if type arrival then insert there
    //insertion result tells if the insertion was the first insertion


    //simulation 1
//    if(removedEvent->getType()=="arrival" && removedEvent->getSimulation()==1){
//
//    }

}
