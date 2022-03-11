//
// Created by Dipesh Asd on 2022-03-09.
//

#ifndef UNTITLED17_QUEUE_H
#define UNTITLED17_QUEUE_H


#include "LinkedList.h"
#include "Event.h"
#include "Node.h"

class Queue: public LinkedList {

public:
    Queue();
    void insert(Event *event) override;

};


#endif //UNTITLED17_QUEUE_H
