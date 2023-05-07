#ifndef Queue_h
#define Queue_h

class Queue
{
public:
    Queue(){};
    ~Queue(){};

    virtual bool isEmpty() = 0; // Checks if the queue is empty
    virtual bool isFull() = 0;  // Checks if the queue is full

    virtual void enqueue(int element) = 0; // Adds an element to the queue
    virtual int dequeue() = 0;            // Removes an element from the queue

    virtual int front() = 0; // Gives the element at front
    virtual int back() = 0;  // Gives the element at rear
};

#endif