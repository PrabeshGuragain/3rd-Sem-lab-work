#include <iostream>
#include "linkedlistStack.h"
#include "linkedlist.cpp"

linkedStack :: linkedStack(){
    top = -1;
};

bool linkedStack :: isEmpty(){
    return (L.isEmpty()); // of top < 0;
}

bool linkedStack :: isFull(){
    return false; // Linked list will not be full
}

void linkedStack :: push(int value){
    L.addToTail(value);
}

int linkedStack :: pop(){
    if (!isEmpty())
    {
        int temp = giveTop();
        L.removeFromTail();
        return temp;
    }
    std::cout << "The stack is empty\n";
}

int linkedStack :: giveTop(){
    if (!isEmpty()) return L.Tail->info;;
    std::cout << "The stack is empty\n";
}

void linkedStack :: display(){
    std::cout<< "The elements of the stack are: ";
    L.traverse();
    std::cout<< std::endl;
}