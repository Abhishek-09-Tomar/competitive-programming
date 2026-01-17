/*
 * Author : Abhishek Tomar
 * Date   : 16/01/2026
 *
 * Problem:
 * Implement a Stack using Array with basic operations:
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
 * isFull()  : O(1)
 *
 * Space Complexity:
 * O(n), where n is the capacity of the stack (array size)
 * ------------------------------------------------------------
 */

#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;     // Array to store stack elements
    int top;      // Index of top element
    int capacity; // Maximum size of stack

public:
    // Constructor
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1; // Stack is initially empty
    }

    /* ---------------- isEmpty ----------------
       Returns true if stack is empty
    */
    bool isEmpty()
    {
        return (top == -1);
    }

    /* ---------------- isFull ----------------
       Returns true if stack is full
    */
    bool isFull()
    {
        return (top == capacity - 1);
    }

    /* ---------------- push ----------------
       Insert element into the stack
    */
    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack Overflow (Stack is full)" << endl;
            return;
        }

        arr[++top] = x;
        cout << x << " pushed into stack" << endl;
    }

    /* ---------------- pop ----------------
       Remove element from the stack
    */
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow (Stack is empty)" << endl;
            return;
        }

        cout << arr[top--] << " popped from stack" << endl;
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
        return arr[top];
    }

    // Destructor to free memory
    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s(5); // Stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Is Stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
