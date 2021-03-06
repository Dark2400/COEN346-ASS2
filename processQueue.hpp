// COEN 346
// Assignment 2
// 
// 03/27/17
// Christopher Simpson
// Marc Bass

#ifndef processQueue_hpp
#define processQueue_hpp

#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <queue>
#include "pcb.hpp"

using namespace std;

//Queue class used to hold PCB's. Very simple

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
	priority_queue<PCB *, vector<PCB *>, priorityComparaison> queueObj; //uses priorityComparison struct, defined in PCB, to decide priorities
    bool isActive;
    
};

#endif /* processQueue_hpp */
