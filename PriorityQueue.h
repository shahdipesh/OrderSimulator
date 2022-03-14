// CLASS: PriorityQueue
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Defines the class that is child of linked list which inserts events based on time
//

#pragma once
#include "LinkedList.h"

class PriorityQueue: public LinkedList {

    void insert(Event *event) override;

};


