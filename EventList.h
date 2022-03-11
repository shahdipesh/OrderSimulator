//
// Created by Dipesh Asd on 2022-03-10.
//

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


