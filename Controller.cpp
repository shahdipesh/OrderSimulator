//
// Created by Dipesh Asd on 2022-03-10.
//

#include "Controller.h"
#include "Order.h"
#include "FileReaderHelper.h"
#include "ArrivalEvent.h"
#include "EventList.h"


void Controller::handleMessage(int id, int expiryTime, string mealName, int numIngredients,int version, FileReaderHelper *fileReaderHelper) {


   //Creating an order object
   Order *order = new Order(id,expiryTime,mealName,numIngredients);

    //Since we are reading a file we create arrival event
   ArrivalEvent *event = new ArrivalEvent(order,version,id);

    //This holds all the list of events that occurs in future or happening now
   EventList *eventList = new EventList;

   //Once we fetch the line from file we insert the event in event list
   eventList->getEventList()->insert(event);
   eventList->processEvent(fileReaderHelper);




}
