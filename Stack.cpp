//
// Created by Dipesh Asd on 2022-03-11.
//

#include "Stack.h"

void Stack::insert(Event *event) {
    Node *node = new Node(event,this->getTop());
    this->setTop(node);
}

void *Stack::findAndRemove(int id) {
    if(this->isEmpty()==0){
        int found =0;
        Node *curr =this->getTop();
        Node *prev=nullptr;
        while(curr!=nullptr && found==0){
            if(curr->getData()->getOrderDetails()->getId()==id){
                found=1;
            }
            else {
                prev = curr;
                curr = curr->getNext();
            }
        }
        if(found==1){
            if(prev!=nullptr) {
                prev->setNext(curr->getNext());
            }
            else{
                Node *res = curr->getNext();
                this->setTop(res);
            }
        }
    }
}



