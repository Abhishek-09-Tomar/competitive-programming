/*
    In this program, we demonstrate:
    1. How to construct nodes in C++
    2. How constructors work
    3. Structure of Singly Linked List
    4. Structure of Doubly Linked List

    NOTE:
    - This file is primarily for understanding data structures.
    - Minimal operations are added only to make it runnable.
*/

#include <iostream>
using namespace std;

/* =====================================================
   CONSTRUCTOR EXPLANATION
   -----------------------------------------------------
   A constructor is a special member function of a class:
   - Same name as the class
   - No return type
   - Automatically called when an object is created
   - Used to initialize data members
   ===================================================== */

/* =====================================================
   SINGLY LINKED LIST
   ===================================================== */

// Definition of a node in a singly linked list
class SinglyNode
{
public:
    int data;         // Data part
    SinglyNode *next; // Pointer to next node

    // Constructor to initialize node
    SinglyNode(int data)
    {
        this->data = data;
        this->next = nullptr; // NULL can also be used
    }
};

// Function to print a singly linked list
void printSinglyList(SinglyNode *head)
{
    SinglyNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Definition of a node in a doubly linked list
class DoublyNode
{
public:
    int data;         // Data part
    DoublyNode *prev; // Pointer to previous node
    DoublyNode *next; // Pointer to next node

    // Constructor to initialize node
    DoublyNode(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

// Function to print a doubly linked list (forward)
void printDoublyList(DoublyNode *head)
{
    DoublyNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    cout << "----- Singly Linked List -----" << endl;

    // Creating singly linked list nodes
    SinglyNode *s1 = new SinglyNode(10);
    SinglyNode *s2 = new SinglyNode(20);
    SinglyNode *s3 = new SinglyNode(30);

    // Linking nodes
    s1->next = s2;
    s2->next = s3;

    // Print singly linked list
    printSinglyList(s1);

    cout << "\n----- Doubly Linked List -----" << endl;

    // Creating doubly linked list nodes
    DoublyNode *d1 = new DoublyNode(100);
    DoublyNode *d2 = new DoublyNode(200);
    DoublyNode *d3 = new DoublyNode(300);

    // Linking nodes
    d1->next = d2;
    d2->prev = d1;

    d2->next = d3;
    d3->prev = d2;

    // Print doubly linked list
    printDoublyList(d1);

    return 0;
}
