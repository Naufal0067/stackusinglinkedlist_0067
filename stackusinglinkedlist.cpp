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
       if (isEmpty()) {
        cout << "Stack is empty." << endl;
       } 
        cout << "Popped value: " << top->data << endl;
        top = top-next; // update the top pointer to the next node

    }

    // peek/top operation: retrieve the value of the topmost elemetn without removing it
    void peek() {
        if (top == NULL) {
            cout << "List is empty." << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " " << endl;
                current = current->next; 
            }
            cout << endl;
        }
    }
}