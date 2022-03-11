//
// Created by Dipesh Asd on 2022-03-10.
//

#ifndef UNTITLED17_NODE_H
#define UNTITLED17_NODE_H


#include "Event.h"

class Node {

private:
    Event *data;
    Node *next;

public:
    Node(Event *event, Node *next);

    Event *getData();

    void setData(Event *event);

    Node *getNext() const;

    void setNext(Node *next);

};


#endif //UNTITLED17_NODE_H
