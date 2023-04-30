#ifndef linkedStack_h
# define linkedStack_h
#include "stack.h"
#include "linkedlist.h"

class linkedStack : public stack
{
public:
    linkedlist L;
    int top;

    linkedStack();

    bool isEmpty(); //Checks if the stack is empty
    bool isFull();  //Checks if the stack is full

    void push(int); //Adds an element into the stack
    int pop();      //Removes an element from the stack
    int giveTop();  //Gives the element at the top

    // Extra functions 
    void display(); //Displays the element of stack
};

#endif

