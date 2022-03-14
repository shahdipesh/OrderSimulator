//
// Created by Dipesh Asd on 2022-03-09.
//

#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : top(nullptr),size(0) {}

// PURPOSE:    Print the contents of List
void LinkedList::print() {
    Node *curr =this->top;
    while(curr != nullptr){
        cout << curr->getData()->getOrderDetails()->getTimeStamp() << "--->";
        curr=curr->getNext();
    }
    cout<<endl;

}

Node *LinkedList::getTop() {
    return top;
}

void LinkedList::setTop(Node *top) {
    LinkedList::top = top;
}

// PURPOSE:   Tell if the list is empty
// Returns: 0 if not empty and 1 if empty
int LinkedList::isEmpty() {
    if(this->getTop()==nullptr){
        return 1;
    }
    else{
        return 0;
    }
}

// PURPOSE:  Deletes the top node of the list
// Returns: Node deleted
Node * LinkedList::remove() {
        Node *curr = nullptr;
        if(!this->isEmpty()) {
            curr = this->getTop();
            this->setTop(this->getTop()->getNext());
        }
        return curr;
}

// PURPOSE: Finds the node with a given id and deletes it
// PARAMETERS:
    // id: Event's order id.
void LinkedList::findAndRemove(int id) {
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
