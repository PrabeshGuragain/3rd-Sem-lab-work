#ifndef arrayStack_h
# define arrayStack_h
#include "stack.h"

class arrayStack : public stack
{
public:
    int length;
    int* arrayPtr;
    int top;

    arrayStack(int);

    bool isEmpty(); //Checks if the stack is empty
    bool isFull();  //Checks if the stack is full

    void push(int); //Adds an element into the stack
    int pop();      //Removes an element from the stack
    int giveTop();  //Gives the element at the top

    // Extra functions 
    void display(); //Displays the element of stack
};

#endif

