/*
 * Author : Abhishek Tomar
 * Date   : 16/01/2026
 *
 * Topic  : Doubly Linked List
 *
 * Description:
 * A doubly linked list is a linear data structure in which
 * each node contains three parts:
 * 1. data
 * 2. pointer to previous node
 * 3. pointer to next node
 *
 * ------------------------------------------------------------
 * Time Complexity:
 * Creation & Linking : O(1) per node
 * Traversal          : O(n)
 *
 * Space Complexity:
 * O(n), where n is the number of nodes
 * ------------------------------------------------------------
 */

#include <iostream>
using namespace std;

// node definition
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int new_data)
    {
        data = new_data;
        prev = nullptr;
        next = nullptr;
    }
};

// traversal function
void traverseForward(Node *head)
{
    Node *temp = head;
    cout << "Forward Traversal: ";

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void traverseBackward(Node *tail)
{
    Node *temp = tail;
    cout << "Backward Traversal: ";

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    // Creating nodes
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    traverseForward(head);
    traverseBackward(third);

    return 0;
}
