//
// Created by Dipesh Asd on 2022-03-09.
//

#include "Event.h"

#include <utility>



string Event::getType() {
    return type;
}

void Event::setType(string type) {
    Event::type = type;
}

Order *Event::getOrderDetails() const {
    return orderDetails;
}

void Event::setOrderDetails(Order *orderDetails) {
    Event::orderDetails = orderDetails;
}

int Event::getTime() {
    return time;
}

void Event::setTime(int time) {
    Event::time = time;
}



int Event::getSimulation() {
    return simulation;
}

void Event::setSimulation(int simulation) {
    Event::simulation = simulation;
}

Event::Event(string type, Order *orderDetails, int simulation, int time) : type(type),
                                                                                  orderDetails(orderDetails),
                                                                                  simulation(simulation), time(time) {}

