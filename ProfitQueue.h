// CLASS: ProfitQueue
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Defines the class that is child of linked list which inserts items based on cost of food
//

#pragma once


#include "PriorityQueue.h"

class ProfitQueue: public PriorityQueue {

public:
    void insert(Event *event) override;

};


