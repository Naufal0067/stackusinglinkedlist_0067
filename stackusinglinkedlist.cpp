#include <iostream>
using namespace std;

//  Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node*next;

    Node(){
        next = NULL;
    }
};

// stack class
class Stack {
private:
    Node* top; // pointer to the top node of the stuck

public:
    Stack() {
        top = NULL; // intialize the stack with a null yop pointer
    }

    // pop operation: remove the topmost element from the stack
    void pop() {
        
    }
}