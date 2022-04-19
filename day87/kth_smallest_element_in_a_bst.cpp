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

int kthSmallest(TreeNode *root, int k)
{
    if (root == NULL)
        return -1;
    int left_size = 0;
    if (root->left != NULL)
        left_size = kthSmallest(root->left, k);
    if (left_size != -1)
        return left_size;
    if (++left_size == k)
        return root->val;
    int right_size = kthSmallest(root->right, k - left_size - 1);
    return right_size;
}