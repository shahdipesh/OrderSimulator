//
// Created by Dipesh Asd on 2022-03-10.
//

#include "Node.h"

Node::Node(Event *event, Node *next) : data(event), next(next) {}

Event *Node::getData() {
    return this->data;
}

void Node::setData(Event *event) {
    event = event;
}

Node *Node::getNext() const {
    return this->next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
