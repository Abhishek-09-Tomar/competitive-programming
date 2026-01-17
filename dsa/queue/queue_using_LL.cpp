/*
 * Author : Abhishek Tomar
 * Date   : 16/01/2026
 *
 * Problem:
 * Implement a Queue using Linked List with basic operations:
 * 1. enqueue
 * 2. dequeue
 * 3. front
 * 4. isEmpty
 *
 * ------------------------------------------------------------
 * Time Complexity:
 * enqueue() : O(1)
 * dequeue() : O(1)
 * front()   : O(1)
 * isEmpty() : O(1)
 *
 * Space Complexity:
 * O(n), where n is the number of elements in the queue
 * (Dynamic memory allocation using linked list)
 * ------------------------------------------------------------
 */

#include <iostream>
using namespace std;

/* ============================================================
   NODE DEFINITION
   ============================================================ */

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

/* ============================================================
   QUEUE CLASS (Using Linked List)
   ============================================================ */

class Queue
{
private:
    Node *frontNode; // Pointer to front of queue
    Node *rearNode;  // Pointer to rear of queue

public:
    // Constructor
    Queue()
    {
        frontNode = nullptr;
        rearNode = nullptr;
    }

    /* ---------------- isEmpty ----------------
       Returns true if queue is empty
    */
    bool isEmpty()
    {
        return (frontNode == nullptr);
    }

    /* ---------------- enqueue ----------------
       Insert element at the rear of the queue
    */
    void enqueue(int x)
    {
        Node *newNode = new Node(x);

        if (isEmpty())
        {
            frontNode = rearNode = newNode;
        }
        else
        {
            rearNode->next = newNode;
            rearNode = newNode;
        }

        cout << x << " enqueued into queue" << endl;
    }

    /* ---------------- dequeue ----------------
       Remove element from the front of the queue
    */
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow (Queue is empty)" << endl;
            return;
        }

        Node *temp = frontNode;
        cout << temp->data << " dequeued from queue" << endl;

        frontNode = frontNode->next;

        if (frontNode == nullptr)
        {
            rearNode = nullptr;
        }

        delete temp;
    }

    /* ---------------- front ----------------
       Returns the front element of the queue
    */
    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return frontNode->data;
    }
};

/* ============================================================
   MAIN FUNCTION
   ============================================================ */

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Is Queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
