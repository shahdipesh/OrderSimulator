//
// Created by Dipesh Asd on 2022-03-10.
//

#include "Controller.h"
#include "Order.h"

#include "iostream"
#include "FileReaderHelper.h"
#include "Event.h"
#include "ArrivalEvent.h"
#include "PriorityQueue.h"
#include "EventList.h"


void Controller::handleMessage(int id, int time, string mealName, int numIngredients,int version, FileReaderHelper *fileReaderHelper) {



   Order *order = new Order(id,time,mealName,numIngredients);

   ArrivalEvent *event = new ArrivalEvent(order,time,version);

   EventList *eventList = new EventList;
   eventList->getEventList()->insert(event);
   eventList->processEvent();




}
