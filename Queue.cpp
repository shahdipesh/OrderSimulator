//
// Created by Dipesh Asd on 2022-03-09.
//

#include "Queue.h"
#include "Node.h"

Queue::Queue():LinkedList() {}

void Queue::insert(Event *event) {
    Node *curr = this->getTop();
    Node *node = new Node(event,nullptr);
    if(curr==nullptr){
       this->setTop(node);
       return;
    }
    while(curr->getNext() != nullptr){
        curr=curr->getNext();
    }
    curr->setNext(node);
    this->setSize(this->getSize()+1);
}




