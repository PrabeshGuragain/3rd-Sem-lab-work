#include <iostream>
#include "arrayStack.h"

arrayStack :: arrayStack(int len){
    arrayPtr = new int[len];
    top = -1;
};

bool arrayStack :: isEmpty(){
    return (top < 0);
}
 
bool arrayStack :: isFull(){
    return (top == length - 1);
}

void arrayStack :: push(int value){
    arrayPtr[++top] = value;

}

int arrayStack :: pop(){
    if (!isEmpty())
    {
        return arrayPtr[top--];
    }
    std::cout << "The stack is empty\n";
}

int arrayStack :: giveTop(){
    if (!isEmpty()) return arrayPtr[top];
    std::cout << "The stack is empty\n";
}

void arrayStack :: display(){
    std::cout<< "The elements of the stack are: ";
    for (int i = 0; i <= top; i++)
    {
        std::cout<< arrayPtr[i] << ",";
    }
    std::cout<< std::endl;
}