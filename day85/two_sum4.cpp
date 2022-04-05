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

vector<int> inordertraversal(TreeNode* root){
    vector<int> res;
    if(root==NULL)
        return res;
    stack<TreeNode*> s;
    TreeNode* cur=root;
    while(cur!=NULL or !s.empty()){
        while(cur!=NULL){
            s.push(cur);
            cur=cur->left;
        }
        cur=s.top();
        s.pop();
        res.push_back(cur->val);
        cur=cur->right;
    }
    return res;
}

bool findTarget(TreeNode *root, int sum)
{
    vector<int> inorder=inordertraversal(root);
    int left=0,right=inorder.size()-1;
    while(left<right){
        int cur=inorder[left]+inorder[right];
        if(cur==sum)
            return true;
        else if(cur<sum)
            left++;
        else
            right--;
    }
    return false;   
}

int main(){
    TreeNode *root = new TreeNode(5, new TreeNode(3, new TreeNode(2), new TreeNode(4)), new TreeNode(6, nullptr, new TreeNode(7)));
    cout<<findTarget(root, 111);
    return 0;
}