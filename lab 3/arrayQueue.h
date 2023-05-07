#ifndef arrayQueue_h
#define arrayQueue_h

#include "Queue.h"


class arrayQueue : public Queue
{
public:
    int Front;
    int Rear;
    int lenght;
    int* values;

    arrayQueue(int length);
    ~arrayQueue(){};

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