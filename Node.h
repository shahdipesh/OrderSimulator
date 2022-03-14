// CLASS: Node
//
// Author: Dipesh Shah, 7882947
//
// REMARKS: Defines the Node in an linked list
//

#pragma once
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
