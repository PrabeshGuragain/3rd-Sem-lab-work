#include "arrayStack.cpp"
#include "linkedlistStack.cpp"
using namespace std;

int main(){
    cout << "Using linked list:\n";
    linkedStack S;   
    S.push(2);
    S.push(3);
    cout << "Top:" << S.giveTop() << endl;
    S.push(4);
    S.display();
    S.pop();
    S.pop();
    S.display();
    cout << "Top:" << S.giveTop() << endl;

    cout << endl;
    cout << "Using Array:\n";
    arrayStack Sa(5);   
    Sa.push(2);
    Sa.push(3);
    cout << "Top:" << Sa.giveTop() << endl;
    Sa.push(4);
    Sa.display();
    Sa.pop();
    Sa.pop();
    Sa.display();
    cout << "Top: " << Sa.giveTop();
    return 0; 
}