#include <iostream>
#include "arrayQueue.cpp"
#include "linkedListQueue.cpp"

using namespace std;

void print(arrayQueue);

template <typename T>
void queueOperations(T q)
{
    q.print();
    q.enqueue(5);
    cout << "5 enqued " << endl;
    q.print();
    q.enqueue(2);
    cout << "2 enqued " << endl;
    q.enqueue(3);
    cout << "3 enqued " << endl;
    q.print();
    cout << "Dequed " << q.dequeue() << endl;
    q.print();
    cout << "Front is: " << q.front() << endl;
    cout << "Rear  is: " << q.back() << endl;
}

void usingArray()
{
    arrayQueue q(5);
    queueOperations<arrayQueue>(q);
}

void usingLinkedlist()
{
    linkedlistQueue q;
    queueOperations<linkedlistQueue>(q);

}

int main()
{
   cout << "Using Array:\n\n";
   usingArray();
   cout << endl;
   cout << "Using Linked list:\n\n";
   usingArray();
}