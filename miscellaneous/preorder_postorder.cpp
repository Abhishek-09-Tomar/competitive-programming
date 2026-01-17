#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
    unordered_map<int, int> mp;
    int preIdx = 0;

    TreeNode *build(vector<int> &preorder, int inStart, int inEnd)
    {
        if (inStart > inEnd)
            return NULL;

        int rootVal = preorder[preIdx++];
        TreeNode *root = new TreeNode(rootVal);

        int mid = mp[rootVal];

        root->left = build(preorder, inStart, mid - 1);
        root->right = build(preorder, mid + 1, inEnd);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        mp.clear();
        preIdx = 0;
        for (int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        return build(preorder, 0, inorder.size() - 1);
    }
};

#include <queue>
void printLevelOrder(TreeNode *root)
{
    if (!root)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *curr = q.front();
        q.pop();
        cout << curr->val << " ";
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}

int main()
{
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Solution sol;
    TreeNode *root = sol.buildTree(preorder, inorder);

    cout << "Reconstructed Tree (Level Order): ";
    printLevelOrder(root);
    return 0;
}