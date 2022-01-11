#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(NULL),right(NULL){}
    TreeNode(int x):val(x),left(NULL),right(NULL){}
    TreeNode(int x,TreeNode* l,TreeNode* r):val(x),left(l),right(r){}
};


int sumRootToLeaf(TreeNode* root, int sum = 0) {
    if (!root) return 0;
    sum = sum * 2 + root->val;
    if (!root->left && !root->right) return sum;
    return sumRootToLeaf(root->left, sum) + sumRootToLeaf(root->right, sum);
}


int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(1);
    cout << sumRootToLeaf(root) << endl;
    return 0;
}


