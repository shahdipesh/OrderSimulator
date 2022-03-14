//
// Created by Dipesh Asd on 2022-03-12.
//

#include "ProfitQueue.h"


// PURPOSE:  Overrides  insert method of Linked list to insert events based on cost for the order
// PARAMETERS:
//     Event *event: Event to insert
void ProfitQueue::insert(Event *event) {

    Node *node = new Node(event,nullptr);
    if(this->isEmpty()){
        this->setTop(node);
    }
    else{
        Node *curr = this->getTop();
        Node *prev = nullptr;
        while(curr!=nullptr && curr->getData()->getOrderDetails()->getPrice()>=event->getOrderDetails()->getPrice()){
            prev=curr;
            curr = curr->getNext();
        }
        if(prev!=nullptr) {
            prev->setNext(node);
            node->setNext(curr);
        }
        else{
            node->setNext(this->getTop());
            this->setTop(node);
        }
    }

}

