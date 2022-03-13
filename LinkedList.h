//
// Created by Dipesh Asd on 2022-03-09.
//

#pragma once
#include "Node.h"

class LinkedList {
private:
    Node *top;
    int size;
public:
    LinkedList();
    virtual void print();
    virtual void insert(Event *event)=0; //pure virtual method so subclass has to implement
    virtual int isEmpty();
    virtual Node* remove();
    virtual Node *getTop();
    virtual void setTop(Node *top);
    virtual void findAndRemove(int id);
    int getSize() const;

    void setSize(int size);

};

