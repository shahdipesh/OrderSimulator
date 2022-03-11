//
// Created by Dipesh Asd on 2022-03-10.
//

#include "OrderQueue.h"
#include "iostream"


OrderQueue::OrderQueue() : listOfEvents(new Queue),itemsInQueue(0),currentTime(0),currentNumOfCompletedOrders(0) {}

void OrderQueue::handleOrderEvent(Event *event) {
    this->currentTime = event->getTime();
    if(event->getType()=="arrival"){
       handleArrivalEvent(event);
    }
    else{
        handleCompleteEvent(event);
    }


}

void OrderQueue::handleArrivalEvent(Event *event) {
    cout<<"Time :"<<this->currentTime<<" FoodOrder "<<itemsInQueue+1<<" arrives ->"; event->getOrderDetails()->printDetails();
    if(this->itemsInQueue==0){
        cout<<"Time :"<<this->currentTime<<" FoodOrder "<<this->itemsInQueue+1<<" is getting prepared"<<endl;
    }
    this->listOfEvents->insert(event);
    itemsInQueue++;
}

void OrderQueue::handleCompleteEvent(Event *event) {

    cout<<"Time :"<<this->currentTime<<" FoodOrder "<<currentNumOfCompletedOrders<<" has been served ->"
    <<"Revenue grew by: "<<event->getOrderDetails()->getPrice();


}




