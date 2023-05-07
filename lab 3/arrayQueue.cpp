#include "arrayQueue.h"
#include <iostream>

arrayQueue ::arrayQueue(int lenght)
{
    values = new int[lenght];
    Front = -1;
    Rear = -1;
}

bool arrayQueue ::isEmpty()
{
    return (Rear == Front);
}

bool arrayQueue ::isFull()
{
    return (Rear == lenght - 1);
}

void arrayQueue ::enqueue(int value)
{
    if (!isFull())
    {
        values[++Rear] = value;
    }
    else
    {
        std::cout << "Queue Overflow" << std::endl;
    }
}

int arrayQueue ::dequeue()
{
    if (!isEmpty())
    {
        int temp = front();
        Front++;
        return temp;
    }
    else
    {
        std::cout << "Queue Underflow" << std::endl;
    }
}

int arrayQueue ::front()
{
    if (!isEmpty())
    {
        return values[Front + 1];
    }
    else
    {
        std::cout << "Empty Queue" << std::endl;
    }
    
}

int arrayQueue ::back()
{
    if (!isEmpty())
    {
        return values[Rear];
    }
    else
    {
        std::cout << "Empty Queue" << std::endl;
    }
}

void arrayQueue ::print()
{
    std::cout << "The values in the queue are: \n";
    for (int i = Front + 1; i <= Rear; i++)
    {
        std::cout << values[i] << ",";
    }
    std::cout << std::endl;
}

void arrayQueue :: update(){}; // Made for circular queue