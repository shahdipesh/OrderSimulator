//
// Created by Dipesh Asd on 2022-03-10.
//

#include "OrderQueueSimulator.h"
#include "iostream"
#include "CompletionEvent.h"


OrderQueueSimulator::OrderQueueSimulator() : Simulation(new Queue) {}
