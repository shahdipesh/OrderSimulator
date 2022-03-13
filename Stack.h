//
// Created by Dipesh Asd on 2022-03-11.
//

#pragma once


#include "LinkedList.h"

class Stack: public LinkedList {
public:
    void insert(Event *event) override;

};

