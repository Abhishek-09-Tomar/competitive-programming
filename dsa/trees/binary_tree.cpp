/*
 * Author       : Abhishek Tomar
 * Date         : 16/01/2026
 * Language     : C++
 *
 * Problem      : Implement a Binary Tree
 * Description  :
 *   This program demonstrates the basic structure of a Binary Tree
 *   and explains how insertion works using a Binary Search Tree (BST).
 *
 *   For better understanding, the overall problem is divided into
 *   smaller sub-problems:
 *
 *   1. Insert operation
 *   2. Delete operation
 *   3. Traversal operations
 *        (i)   Inorder Traversal
 *        (ii)  Preorder Traversal
 *        (iii) Postorder Traversal
 *
 *   NOTE:
 *   In this file, we focus ONLY on the INSERT operation.
 *   Traversal and delete operations will be covered separately.
 */

#include <iostream>
using namespace std;

/* ============================================================
   NODE DEFINITION
   ------------------------------------------------------------
   Each node of a binary tree contains:
   1. Data
   2. Pointer to left child
   3. Pointer to right child
   ============================================================ */

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize a node
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

/* ============================================================
   INSERT OPERATION (Binary Search Tree)
   ------------------------------------------------------------
   Rule:
   - If value < root->data  → insert in left subtree
   - If value > root->data  → insert in right subtree
   ============================================================ */

Node *insert(Node *root, int val)
{
    // If tree is empty, create root node
    if (root == nullptr)
        return new Node(val);

    // Recursive insertion
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

/* ============================================================
   MAIN FUNCTION
   ============================================================ */

int main()
{
    Node *root = nullptr;

    // Inserting nodes into the binary tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "NOTE:" << endl;
    cout << "This program only demonstrates how insertion works in a Binary Tree." << endl;
    cout << "No output is shown because traversal operations are not implemented yet." << endl;

    cout << "\n------------------------------------------------------------\n";

    cout << "Next Topic:" << endl;
    cout << "Binary Tree Traversals (Inorder, Preorder, Postorder)" << endl;
    cout << "We will use traversal to display the inserted elements.\n"
         << endl;

    cout << "Keep learning. Keep growing." << endl;

    return 0;
}
