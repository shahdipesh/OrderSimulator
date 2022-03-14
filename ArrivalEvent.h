// CLASS: ArrivalEvent
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Defines the Arrival Event
//
//-----------------------------------------

#pragma once


#include "Event.h"

class ArrivalEvent: public Event {

public:
    //Constructor for the class
    ArrivalEvent(Order *orderDetails, int time,int simulation);

};
