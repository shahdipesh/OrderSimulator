// CLASS: Stack
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: extends linked list class and then overrides the insert method to implement a stack
//

#pragma once


#include "LinkedList.h"

class Stack: public LinkedList {
public:
    void insert(Event *event) override;

};

