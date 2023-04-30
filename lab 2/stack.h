#ifndef stack_h
# define stack_h

class stack
{
public:
    stack(/* args */){};

    virtual bool isEmpty()=0; //Checks if the stack is empty
    virtual bool isFull()=0;  //Checks if the stack is full

    virtual void push(int)=0; //Adds an element into the stack
    virtual int pop()=0;      //Removes an element from the stack
    virtual int giveTop()=0;      //Gives the element at the top
};

#endif