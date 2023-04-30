#ifndef linkedlist_h
#define linkedlist_h

class Node{
public:

    int   info;                         // To store the given data
    Node* next;                         // To point the next node
    
    Node(int i = 0, Node* n = nullptr)
    :next(n), info(i){}// Constructor assigning values
    ~Node(){}
};

class linkedlist
{
public:

    Node* Head;                         // First element of linked list
    Node* Tail;                         // Last  element of linked list
    
    linkedlist();                       // constructor to be call
    ~linkedlist();                      // destructor 

    bool isEmpty();                     // returns 1 if empty, 0 is not empty
    bool isFull();                      // might not be that useful in case of linked linked
    
    void addToHead(int value);          // Adds value creating node to the Head of linked list
    void addToTail(int value);          // Adds value creating node to the Tail of the linked list
    void add(int value, Node* pred);    // Adds value creating node to the Node after given node

    void removeFromHead();              // Removes the element from Head
    void removeFromTail();              // Removes the element from Tail
    void removeNext(Node* pred);        // Removes the element after the given node
    void remove(int value);             // Deletes all the nodes containing the given value

    Node* retrive(int v);               // Returns the pointer to the node containing given value (1st one)
    bool search(int value);             // Returns true if the data exist in the list, false otherwise
    void traverse();                    // Traverses through the linked list and prints all the values
};

#endif