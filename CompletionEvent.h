//
// Created by Dipesh Asd on 2022-03-10.
//

#ifndef UNTITLED17_COMPLETIONEVENT_H
#define UNTITLED17_COMPLETIONEVENT_H


#include "Event.h"

class CompletionEvent: public Event {

public:
    CompletionEvent(Order *orderDetails, int time,int simulation);

};


#endif //UNTITLED17_COMPLETIONEVENT_H
