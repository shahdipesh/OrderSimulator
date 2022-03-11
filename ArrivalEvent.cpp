//
// Created by Dipesh Asd on 2022-03-10.
//

#include "ArrivalEvent.h"



ArrivalEvent::ArrivalEvent( Order *orderDetails, int time,int simulation) : Event("arrival", orderDetails, time,simulation) {}




