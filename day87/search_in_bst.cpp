#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *searchBST(TreeNode *root, int val)
{
    if (root == NULL) return NULL;
    if (val == root->val)
        return root;
    else if (val < root->val)
    {
        root = root->left;
    }
    else
    {
        root = root->right;
    }
    return searchBST(root, val);
}

void printTree(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    // root->right->left=new TreeNode(6);
    // root->right->right=new TreeNode(9);
    printTree(searchBST(root, 2));
    return 0;
}