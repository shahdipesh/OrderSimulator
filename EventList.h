// CLASS: EventList
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Defines the class which contails all the list of events in current and future
//
//-----------------------------------------
#pragma once


#include "LinkedList.h"
#include "FileReaderHelper.h"

class EventList {
private:
    LinkedList *eventList;
public:
    EventList(); //constructor

    void processEvent(FileReaderHelper *fileReaderHelper);

    LinkedList *getEventList() ; //getter

};


