// print path from root node to given node.find no.of components of graph.longest common sub - sequence of two strings.remove the cycle from the linked list.
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

bool findPath(Node *root, int target, vector<int> &path)
{
    if (root == NULL)
        return false;

    path.push_back(root->data);

    if (root->data == target)
        return true;

    if (findPath(root->left, target, path) ||
        findPath(root->right, target, path))
        return true;

    // backtrack
    path.pop_back();
    return false;
}

void printPath(Node *root, int target)
{
    vector<int> path;

    if (!findPath(root, target, path))
    {
        cout << "Target node not found";
        return;
    }

    for (int val : path)
        cout << val << " ";
}
