#include <iostream>
#include "linkedlist.h"
#include "linkedlist.cpp"

int main(){
    linkedlist L;
    cout << L.isEmpty() << endl;
    cout << L.isFull()  << endl;
    L.traverse();

    L.addToHead(1);
    L.addToHead(3);
    L.addToHead(10);
    L.traverse();

    L.addToTail(2);
    L.addToTail(4); // Tail is not being updated
    L.traverse();

    L.removeFromHead();
    L.traverse();
    L.addToHead(5);
    L.addToHead(1);
    L.addToHead(1);
    L.addToHead(5);
    cout << L.search(5) << endl;
    cout << L.search(9) << endl;
    L.addToTail(1);
    L.addToHead(1);
    L.addToHead(1);
    L.addToTail(1);
    L.removeFromTail(); 
    L.traverse();

    L.remove(1);
    L.traverse();   

    Node* out = nullptr;
    out = L.retrive(5);
    cout << "location of 5 is: " <<out << endl;

}
