
#ifndef processQueue_hpp
#define processQueue_hpp

#include <stdio.h>
#include <iostream>
#include <thread>
#include <queue>
#include "pcb.hpp"

using namespace std;

class processQueue
{
public:
    ~processQueue();
    processQueue();
    bool checkActive();
    void setActive(bool);
    bool empty();
    unsigned long size();
    PCB * top();
    void push(PCB *);
    void pop();
    
private:
    priority_queue<PCB *> queueObj;
    bool isActive;
    
    
};

#endif /* processQueue_hpp */
