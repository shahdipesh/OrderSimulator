//
// Created by Dipesh Asd on 2022-03-12.
//

#pragma once


#include "PriorityQueue.h"

class ProfitQueue: public PriorityQueue {

public:
    void insert(Event *event) override;

};


