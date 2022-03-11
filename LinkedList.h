//
// Created by Dipesh Asd on 2022-03-09.
//

#ifndef UNTITLED17_LINKEDLIST_H
#define UNTITLED17_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node *top;
public:
    LinkedList();
    virtual void print();
    virtual void insert(Event *event)=0; //pure virtual method so subclass has to implement
    virtual int isEmpty();
    virtual Node* remove();
    virtual Node *getTop();
    virtual void setTop(Node *top);

};


#endif //UNTITLED17_LINKEDLIST_H
