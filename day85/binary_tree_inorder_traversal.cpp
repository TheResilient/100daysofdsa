#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(NULL), right(NULL){}
    TreeNode(int x):val(x),left(NULL),right(NULL){}
    TreeNode(int x, TreeNode* left, TreeNode* right):val(x),left(left),right(right){}
};


vector<int> inorderTraversal(TreeNode* root){
    vector<int>res;
    if(root==NULL) return res;
    stack<TreeNode*>s;
    TreeNode* cur = root;
    while(cur!=NULL || !s.empty()){
        while(cur!=NULL){
            s.push(cur);
            cur = cur->left;
        }
        cur = s.top();
        s.pop();
        res.push_back(cur->val);
        cur = cur->right;
    }
    return res;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> res = inorderTraversal(root);
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}