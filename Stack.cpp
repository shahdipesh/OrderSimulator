//
// Created by Dipesh Asd on 2022-03-11.
//

#include "Stack.h"

void Stack::insert(Event *event) {
    Node *node = new Node(event,this->getTop());
    this->setTop(node);
}





