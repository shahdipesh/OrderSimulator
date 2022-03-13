//
// Created by Dipesh Asd on 2022-03-10.
//

#pragma once


#include "Event.h"

class ArrivalEvent: public Event {

public:
    ArrivalEvent(Order *orderDetails, int time,int simulation);

};
