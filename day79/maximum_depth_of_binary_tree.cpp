#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(NULL), right(NULL){}
    TreeNode(int x): val(x), left(NULL), right(NULL){}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right){}

};

int maxDepth(TreeNode* root){
    //find max depth of tree
    if(root == NULL) return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left, right) + 1;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    cout<<maxDepth(root)<<endl;
    return 0;
}