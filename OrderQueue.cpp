//
// Created by Dipesh Asd on 2022-03-10.
//

#include "OrderQueue.h"
#include "iostream"
#include "CompletionEvent.h"


OrderQueue::OrderQueue() : listOfEvents(new Queue),itemsInQueue(0),currentTime(0),currentNumOfCompletedOrders(0),totalRevenue(0) {}

void OrderQueue::handleOrderEvent(Event *event,LinkedList *eventList) {
    this->currentTime = event->getTime();
    if(event->getType()=="arrival"){
       handleArrivalEvent(event,eventList);
    }
    else{
        handleCompleteEvent(event,eventList);
    }


}

void OrderQueue::handleArrivalEvent(Event *event,LinkedList *eventList) {
    cout<<"Time :"<<this->currentTime<<" FoodOrder "<<itemsInQueue+1<<" arrives ->"; event->getOrderDetails()->printDetails();
    if(this->itemsInQueue==0){
        cout<<"Time :"<<this->currentTime<<" FoodOrder "<<this->itemsInQueue+1<<" is getting prepared"<<endl;
        int completionTime =  this->currentTime+event->getOrderDetails()->getTimeRequired();
        Event *completionEvent = new CompletionEvent(event->getOrderDetails(),completionTime,event->getSimulation());
        eventList->insert(completionEvent);
    }
    this->listOfEvents->insert(event);
    itemsInQueue++;
}

void OrderQueue::handleCompleteEvent(Event *event,LinkedList *eventList) {
    this->currentNumOfCompletedOrders++;
    this->totalRevenue+=event->getOrderDetails()->getPrice();
    cout<<"Time :"<<this->currentTime<<" FoodOrder "<<currentNumOfCompletedOrders<<" has been served ->"
    <<"Revenue grew by: "<<event->getOrderDetails()->getPrice()<<endl;
    this->listOfEvents->remove();
    if( this->listOfEvents->isEmpty()==0) {
        Node *currentNode = this->listOfEvents->getTop();
        int nextNodeIsValid = 0;
        while (currentNode != nullptr && nextNodeIsValid == 0) {
            if (currentNode->getData()->getOrderDetails()->getExpTime() < this->currentTime) {
                Node *res = this->listOfEvents->remove();
                currentNode = res->getNext();
            } else {
                nextNodeIsValid = 1;
                currentNode = currentNode->getNext();
            }
        }
        Event *nextEventToProcess = this->listOfEvents->getTop()->getData();
        //check if order is not expired
        if (currentTime <= nextEventToProcess->getOrderDetails()->getExpTime()) {
            int completionTime = currentTime + (nextEventToProcess->getOrderDetails()->getTimeRequired());
            Event *completionEvent = new CompletionEvent(nextEventToProcess->getOrderDetails(), completionTime,
                                                         nextEventToProcess->getSimulation());
            eventList->insert(completionEvent);
            cout << "Time :" << this->currentTime << " FoodOrder " << this->currentNumOfCompletedOrders + 1
                 << " is getting prepared" << endl;
        }
    }
    else{
        cout<<endl<<".....simulation ended. "<<endl;
        cout<<"- Total number of orders completed: "<<this->currentNumOfCompletedOrders<<endl;
        cout<<"- Total revenue: "<<this->totalRevenue<<endl;

    }
}




