//
// Created by Dipesh Asd on 2022-03-12.
//

#include "ProfitQueue.h"

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

