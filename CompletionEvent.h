//
// Created by Dipesh Asd on 2022-03-10.
//

#pragma once


#include "Event.h"

class CompletionEvent: public Event {

public:
    CompletionEvent(Order *orderDetails, int time,int simulation);

};



