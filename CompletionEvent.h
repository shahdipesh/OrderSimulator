// CLASS: CompletionEvent
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Defines the Completion Event
//
//-----------------------------------------

#pragma once


#include "Event.h"

class CompletionEvent: public Event {

public:
    //Constructor for the class
    CompletionEvent(Order *orderDetails, int time,int simulation);

};



