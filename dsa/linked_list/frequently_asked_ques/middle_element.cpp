// find the middle of the linked list.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int new_data){
        this->data = new_data;
        this->next = nullptr;
    }
};

Node *middle_element_of_ll(Node *head)
{

    if (head == nullptr)
    {
        return nullptr;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
};

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    Node *middle = middle_element_of_ll(head);
    cout << "middle element: " << middle->data << endl;
    return 0;
};