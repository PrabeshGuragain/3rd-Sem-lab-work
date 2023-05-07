#ifndef linkedListQueue_h
#define linkedListQueue_h

#include "Queue.h"
#include "linkedlist.cpp"

class linkedlistQueue : public Queue
{
public:
    linkedlist L;

    linkedlistQueue();
    ~linkedlistQueue(){};

    bool isEmpty();
    bool isFull();

    void enqueue(int element);
    int dequeue();

    int front();
    int back();

    // Extra functions
    void update();
    void print();

};

#endif