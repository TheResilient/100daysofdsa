#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){} 
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){} 
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
                                                                                                                                                                                                   
};

TreeNode* trimBST(TreeNode* root, int low, int high){
    if(root==NULL) return NULL;
    if(root->val<low) return trimBST(root->right,low,high);
    if(root->val>high) return trimBST(root->left,low,high);
    root->left=trimBST(root->left,low,high);
    root->right=trimBST(root->right,low,high);
    return root;
}

int main(){
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    // root->right->left=new TreeNode(6);
    // root->right->right=new TreeNode(9);
    trimBST(root, 2, 3);
    return 0;
}