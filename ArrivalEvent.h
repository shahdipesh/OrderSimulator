//
// Created by Dipesh Asd on 2022-03-10.
//

#ifndef UNTITLED17_ARRIVALEVENT_H
#define UNTITLED17_ARRIVALEVENT_H


#include "Event.h"

class ArrivalEvent: public Event {

public:
    ArrivalEvent(Order *orderDetails, int time,int simulation);


};


#endif //UNTITLED17_ARRIVALEVENT_H
