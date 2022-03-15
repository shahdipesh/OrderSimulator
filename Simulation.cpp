//
// Created by Dipesh Asd on 2022-03-11.
//

#include "Simulation.h"
#include "Event.h"
#include "LinkedList.h"
#include "CompletionEvent.h"
#include "iostream"
#include "FileReaderHelper.h"

Simulation::Simulation(LinkedList *linkedList):listOfEvents(linkedList),itemsInQueue(0),currentTime(0),currentNumOfCompletedOrders(0),totalRevenue(0) {}


// PURPOSE: Based on the event passed to the class we call appropriate method
// PARAMETERS:
//     Event *event: event that is passed into the class
//     LinkedList *eventList: reference to the event list where we insert events based on conditions
void Simulation::handleOrderEvent(Event *event,LinkedList *eventList,FileReaderHelper *fileReaderHelper) {
    this->currentTime = event->getTime();
    if(event->getType()=="arrival"){
        handleArrivalEvent(event,eventList);
    }
    else{
        handleCompleteEvent(event,eventList,fileReaderHelper);
    }


}

// PURPOSE: If the event is of type arrival we call this method which print arrival message and then either processes the order
//          right away or puts it in order queue/stack/or priority queue based on the simulation
// PARAMETERS:
//     Event *event: event that is passed into the class
//     LinkedList *eventList: reference to the event list where we insert events based on conditions
void Simulation::handleArrivalEvent(Event *event,LinkedList *eventList) {
    cout<<"Time :"<<this->currentTime<<" FoodOrder with orderId ->@"<<event->getOrderDetails()->getId()<<" arrives ->"; event->getOrderDetails()->printDetails();
    if(this->itemsInQueue==0){
        cout<<"Time :"<<this->currentTime<<" FoodOrder with orderId ->@"<<event->getOrderDetails()->getId()<<" is getting prepared"<<endl;
        int completionTime =  this->currentTime+event->getOrderDetails()->getTimeRequired();
        Event *completionEvent = new CompletionEvent(event->getOrderDetails(),completionTime,event->getSimulation());
        eventList->insert(completionEvent);
    }
    this->listOfEvents->insert(event);
    itemsInQueue++;
}

// PURPOSE: If the event is of type complete we call this method which print complete message and then removes the order from
//             the order list and processes the next order in queue
// PARAMETERS:
//     Event *event: event that is passed into the class
//     LinkedList *eventList: reference to the event list where we insert events based on conditions
void Simulation::handleCompleteEvent(Event *event,LinkedList *eventList,FileReaderHelper *fileReaderHelper) {
    this->totalRevenue+=event->getOrderDetails()->getPrice();
    cout<<"Time :"<<this->currentTime<<" FoodOrder with orderId ->@"<<event->getOrderDetails()->getId()<<" has been served ->"
        <<"Revenue grew by: "<<event->getOrderDetails()->getPrice()<<endl;
    this->listOfEvents->findAndRemove(event->getOrderDetails()->getId());
    this->currentNumOfCompletedOrders++;
    itemsInQueue--;
    if( this->listOfEvents->isEmpty()==0) {
        Node *currentNode = this->listOfEvents->getTop();
        int nextNodeIsValid = 0;
        while (currentNode != nullptr && nextNodeIsValid == 0) {
            if (currentNode->getData()->getOrderDetails()->getExpTime() < this->currentTime) {
                this->listOfEvents->findAndRemove(currentNode->getData()->getOrderDetails()->getId());
                currentNode = currentNode->getNext();
                itemsInQueue--;
            } else {
                nextNodeIsValid = 1;
                currentNode = currentNode->getNext();
            }
        }

        if (this->listOfEvents->isEmpty() == 0) {

            Event *nextEventToProcess = this->listOfEvents->getTop()->getData();
            //check if order is not expired
            if (currentTime <= nextEventToProcess->getOrderDetails()->getExpTime()) {
                int completionTime = currentTime + (nextEventToProcess->getOrderDetails()->getTimeRequired());
                Event *completionEvent = new CompletionEvent(nextEventToProcess->getOrderDetails(), completionTime,
                                                             nextEventToProcess->getSimulation());
                eventList->insert(completionEvent);
                cout << "Time :" << this->currentTime << " FoodOrder with orderId ->@"
                     << nextEventToProcess->getOrderDetails()->getId()
                     << " is getting prepared" << endl;
            }
        }
    }
        if(eventList->isEmpty()==1 && (fileReaderHelper->hasNextLine()==0) ) {
            cout << endl << ".....simulation ended. " << endl;
            cout << "- Total number of orders completed: " << this->currentNumOfCompletedOrders << endl;
            cout << "- Total revenue: " << this->totalRevenue << endl;
        }


}
