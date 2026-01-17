// Problem Statement: given two sorted singly linked lists, merge them into a single sorted linked list.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int new_data)
    {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Function to merge two sorted linked lists
Node *merge(Node *head1, Node *head2)
{
    // If one list is empty
    if (head1 == nullptr)
        return head2;

    if (head2 == nullptr)
        return head1;

    Node dummy(0);       // Dummy node
    Node *tail = &dummy; // Tail pointer

    while (head1 != nullptr && head2 != nullptr)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    // Attach remaining nodes
    if (head1 != nullptr)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy.next;
}

// Function to print linked list
void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Node *head2 = new Node(5);
    head2->next = new Node(10);
    head2->next->next = new Node(15);
    head2->next->next->next = new Node(20);

    Node *mergedHead = merge(head, head2);

    cout << "Merged Sorted List: ";
    printList(mergedHead);

    return 0;
}
