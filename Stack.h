//
// Created by Dipesh Asd on 2022-03-11.
//

#ifndef UNTITLED17_STACK_H
#define UNTITLED17_STACK_H


#include "LinkedList.h"

class Stack: public LinkedList {
public:
    void insert(Event *event) override;
     void* findAndRemove(int id);
};


#endif //UNTITLED17_STACK_H
