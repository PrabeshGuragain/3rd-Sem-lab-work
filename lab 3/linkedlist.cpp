#include <iostream>
#include "linkedlist.h"
using namespace std;

linkedlist :: linkedlist(){
    // Defining both head and tail to be null at beginning
    Head = nullptr;    
    Tail = nullptr;
}

linkedlist :: ~linkedlist(){ // To free up used memory space
    Node *temp = Head;
    while (temp != nullptr)
    {
        Node *next = temp->next;
        delete temp;
        temp = next;
    }
} 

bool linkedlist :: isEmpty()
{
    // For both head and tail poiniting same thing, ie. NullPtr
    if (Head == nullptr) return true; 

    // Else If head and Tail are pointing different Nodes
    else return false; 
}

bool linkedlist :: isFull() // might not be necessary
{
    // Usually the Linked list is not full as it can create a node
    // and connect it to the linked list. 
    // The only time it fails is when there is no memeory to assign 
    // to create a new node, which rarely occurs.
    return false;
}

// Functinos to add the values

void linkedlist :: addToHead(int v){
    Node* newNode = new Node(v, Head);
    // Creates a node with value of v and points to where head was pointing

    if (isEmpty()) {Tail = newNode;} // If the list was empty
    Head = newNode; // Pointing head to created node
};

void linkedlist :: addToTail(int v){
    Node* newNode = new Node(v, nullptr);
    if (isEmpty()){
        Head = newNode;
        Tail = newNode;
    }
    else{
        Tail->next = newNode;
        Tail = newNode;
    }
};

void linkedlist :: add(int v, Node* pred){
    // The function will not work if the list is empty, as there is no predecessor to pass.
    // We are assumi9ng that the given predessor exists in the linked list.
    Node* newNode = new Node(v, pred->next);
    pred->next = newNode;
};

// removes the values form linked list

void linkedlist :: removeFromHead(){
    if (!isEmpty())
    {Node* toRemove = Head;
    Head = Head->next;
    if(isEmpty()) Tail = nullptr; // If the list is empty after removing element
    delete toRemove;}
    else cout << "Linked list is empty.\n";
};
void linkedlist :: removeFromTail(){

    if (!isEmpty()){
    if(Head == Tail)  // If the list have only one element
    {
        Node* toRemove = Head;    // Helps us to get the locatoin of node to remove
        Head = nullptr;
        Tail = nullptr;
        delete toRemove;
    }
    else
    {
    Node* toRemovePred = Head;
    while(toRemovePred->next != Tail){      //Finds the predecessor of tail node
        toRemovePred = toRemovePred->next;
    }   
    Tail = toRemovePred; 
    toRemovePred->next = nullptr;
    delete toRemovePred->next;              // Removing the last node
    }}
    else cout << "Linked list is empty.\n";

};

void linkedlist :: removeNext(Node* pred){
    // Remove form head is not possible
    if (!isEmpty())
    {if (pred->next == Tail) removeFromTail();
    else{
        Node* toDelete = pred->next;
        pred->next = (pred->next)->next;
        delete toDelete;
    }}
    else cout << "Linked list is empty.\n";

};

void linkedlist :: remove(int value){
   if (!isEmpty()){
    if (Head->info == value) // Checks for head
    {
        removeFromHead();
        remove(value);
    }
    
    Node* currentNode = Head->next;
    Node* prev = Head;
    while (currentNode != NULL)
    {
        if(currentNode->info == value){
            if (currentNode == Tail) removeFromTail();
            else{
                prev->next = currentNode->next;
            }
            currentNode = currentNode->next;
        }
        else{
            prev = prev->next;
            currentNode = currentNode->next;}
    }
   }
    else cout << "Linked list is empty.\n";
}

bool linkedlist :: search(int value){
    Node* currentNode = Head;
        while (currentNode != NULL)
        {
            if ( currentNode->info == value) return true;
            else currentNode = currentNode->next;
        }
    return false;
}

// Gives the location of the value
Node* linkedlist :: retrive(int value){
    Node* currentNode = Head;
    while (currentNode != NULL)
    {
        if ( currentNode->info == value){
            return currentNode;
        }
        else {currentNode = currentNode->next;}
    }    
};

// print the values of linked list
void linkedlist :: traverse(){
    if(isEmpty()){
        cout<<endl;
    }
    else{
        Node* currentNode = Head;
        while (currentNode != NULL)
        {
            cout << currentNode->info << " -> ";
            currentNode = currentNode->next;
        }
    }
};