//
// Created by Dipesh Asd on 2022-03-09.
//

#pragma once

#include "LinkedList.h"

class Queue: public LinkedList {

public:
    Queue();
    void insert(Event *event) override;

};

