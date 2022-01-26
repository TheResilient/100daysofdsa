#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(NULL),right(NULL){}
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};


vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
{
    stack<TreeNode *> st1, st2;
    vector<int> res;

    while (root1 || root2 || !st1.empty() || !st2.empty())
    {
        while (root1)
        {
            st1.push(root1);
            root1 = root1->left;
        }
        while (root2)
        {
            st2.push(root2);
            root2 = root2->left;
        }
        if (st2.empty() || (!st1.empty() && st1.top()->val <= st2.top()->val))
        {
            root1 = st1.top();
            st1.pop();
            res.push_back(root1->val);
            root1 = root1->right;
        }
        else
        {
            root2 = st2.top();
            st2.pop();
            res.push_back(root2->val);
            root2 = root2->right;
        }
    }
    return res;
}

int main(){
    // TreeNode* root = new TreeNode();
    TreeNode* root1 = new TreeNode();
    TreeNode* root2 = new TreeNode();

    root1->val = 2;
    root1->left->val = 1;
    root1->right->val = 4;
    
    root2->val = 1;
    root2->left->val = 0;
    root2->right->val = 3;

    vector<int> res = getAllElements(root1,root2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
    return 0;
}