//
// Created by Dipesh Asd on 2022-03-10.
//

#include "PriorityQueue.h"

void PriorityQueue::insert(Event *event) {
  Node *node = new Node(event,nullptr);
  if(this->isEmpty()){
      this->setTop(node);
  }
  else{
      Node *curr = this->getTop();
      Node *prev = nullptr;
      while(curr!=nullptr && curr->getData()->getTime()<=event->getTime()){
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
