/*
 * Author : Abhishek Tomar
 * Date   : 16/01/2026
 *
 * Problem:
 * Implement a Stack using Linked List with basic operations:
 * 1. push
 * 2. pop
 * 3. peek
 * 4. isEmpty
 *
 * ------------------------------------------------------------
 * Time Complexity:
 * push()    : O(1)
 * pop()     : O(1)
 * peek()    : O(1)
 * isEmpty() : O(1)
 *
 * Space Complexity:
 * O(n), where n is the number of elements in the stack
 * (Dynamic memory allocation using linked list)
 * ------------------------------------------------------------
 */

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top; // Pointer to the top of the stack

public:
    // Constructor
    Stack()
    {
        top = nullptr;
    }

    /* ---------------- isEmpty ----------------
       Returns true if stack is empty
    */
    bool isEmpty()
    {
        return (top == nullptr);
    }

    /* ---------------- push ----------------
       Insert element at the top of the stack
    */
    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;

        cout << x << " pushed into stack" << endl;
    }

    /* ---------------- pop ----------------
       Remove element from the top of the stack
    */
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow (Stack is empty)" << endl;
            return;
        }

        Node *temp = top;
        cout << temp->data << " popped from stack" << endl;
        top = top->next;
        delete temp;
    }

    /* ---------------- peek ----------------
       Returns the top element of the stack
    */
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Is Stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
