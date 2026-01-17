/*
 * Author : Abhishek Tomar
 * Date   : 16/01/2026
 * Language : C++
 *
 * Topic  : Binary Tree – Node Structure
 * Purpose:
 *   This program demonstrates how to define the basic structure
 *   of a Binary Tree using a Node class.
 *
 *   Each node contains:
 *   1. Data value
 *   2. Pointer to the left child
 *   3. Pointer to the right child
 *
 *   No operations (insert, delete, traversal) are performed here.
 *   This file is only for understanding the binary tree structure.
 */

#include <iostream>
using namespace std;

class Node
{
public:
    int data;    // Value stored in the node
    Node *left;  // Pointer to left child
    Node *right; // Pointer to right child

    // Constructor to initialize a node
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

/* ============================================================
   MAIN FUNCTION
   ============================================================ */

int main()
{
    cout << "\nWell done!" << endl;
    cout << "You have successfully understood the basic structure of a Binary Tree." << endl;

    cout << "==========================================================================================" << endl;

    cout << "\nNext Step:" << endl;
    cout << "We will learn how the following operations work in a Binary Tree:" << endl;
    cout << "1. Insertion" << endl;
    cout << "2. Deletion" << endl;
    cout << "3. Tree Traversals (Inorder, Preorder, Postorder)" << endl;

    cout << "==========================================================================================" << endl;
    cout << "Keep learning and keep improving your data structures skills!" << endl;

    return 0;
}
