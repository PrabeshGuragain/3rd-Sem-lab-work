#include "linkedListQueue.h"
#include <iostream>

linkedlistQueue ::linkedlistQueue()
{
    // We have head and tail of linked list so no need of front and rear
}

bool linkedlistQueue ::isEmpty()
{
    return (L.Tail == L.Head);
}

bool linkedlistQueue ::isFull()
{
    return 0; // Linked list is never full unless there is no memory in computer
}

void linkedlistQueue ::enqueue(int value)
{
    L.addToTail(value);
}

int linkedlistQueue ::dequeue()
{
    if (!isEmpty())
    {
        int temp = back(); // gives the value of tail
        L.removeFromTail();
        return temp;
    }
    else
    {
        std::cout << "Queue Underflow" << std::endl;
    }
}

int linkedlistQueue ::front()
{
    if (!isEmpty())
    {
        return L.Head->info;
    }
    else
    {
        std::cout << "Empty Queue" << std::endl;
    }
    
}

int linkedlistQueue ::back()
{
    if (!isEmpty())
    {
        return L.Tail->info;
    }
    else
    {
        std::cout << "Empty Queue" << std::endl;
    }
}

void linkedlistQueue ::print()
{
    std::cout << "The values in the queue are: \n";
    L.traverse();
}

void linkedlistQueue :: update(){}; // Made for circular queue