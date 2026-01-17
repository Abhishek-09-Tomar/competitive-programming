/*
 * Author : Abhishek Tomar
 * Date   : 16/01/2026
 *
 * Topic  : Circular Singly Linked List
 *
 * Description:
 * A circular linked list is a linked list where the last node
 * points back to the first node instead of pointing to NULL.
 *
 * ------------------------------------------------------------
 * Time Complexity:
 * Traversal : O(n)
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
    Node *next;

    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

// traversal function
void traverseCircularList(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main()
{
    // Creating nodes using constructor
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    // Creating circular links
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;

    // Traversing circular linked list
    cout << "Circular Linked List: ";
    traverseCircularList(head);

    return 0;
}
