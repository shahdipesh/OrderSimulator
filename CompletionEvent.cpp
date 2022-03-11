//
// Created by Dipesh Asd on 2022-03-10.
//

#include "CompletionEvent.h"

CompletionEvent::CompletionEvent(Order *orderDetails, int time,int simulation) : Event("complete", orderDetails, time,simulation) {}
