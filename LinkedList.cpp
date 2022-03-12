//
// Created by Dipesh Asd on 2022-03-09.
//

#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : top(nullptr),size(0) {}

void LinkedList::print() {
    Node *top =this->top;
    while(top != nullptr){
        cout << top->getData()->getOrderDetails()->getTimeStamp() << "--->";
        top=top->getNext();
    }
    cout<<endl;

}

Node *LinkedList::getTop() {
    return top;
}

void LinkedList::setTop(Node *top) {
    LinkedList::top = top;
}

int LinkedList::isEmpty() {
    if(this->getTop()==nullptr){
        return 1;
    }
    else{
        return 0;
    }
}

Node *LinkedList::remove() {
        Node *curr = nullptr;
        if(!this->isEmpty()) {
            curr = this->getTop();
            this->setTop(this->getTop()->getNext());
        }
        return curr;
}
void *LinkedList::findAndRemove(int id) {
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

int LinkedList::getSize() const {
    return size;
}

void LinkedList::setSize(int size) {
    LinkedList::size = size;
}
