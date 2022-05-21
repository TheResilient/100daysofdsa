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

vector<int> findroots(TreeNode* root)
{
    vector<int> res;
    if(root==nullptr)
    {
        return res;
    }
    if(root->left==nullptr && root->right==nullptr)
    {
        res.push_back(root->val);
        return res;
    }
    vector<int> left=findroots(root->left);
    vector<int> right=findroots(root->right);
    for(int i=0;i<left.size();i++)
    {
        res.push_back(left[i]);
    }
    for(int i=0;i<right.size();i++)
    {
        res.push_back(right[i]);
    }
    return res;
}


bool leafSimilar(TreeNode* root1, TreeNode* root2)
{
    vector<int> left=findroots(root1);
    vector<int> right=findroots(root2);
    // sort(left.begin(),left.end());
    // sort(right.begin(),right.end());
    if(left!=right)
    {
        return false;
    }
    return true;
}

int main(){
    TreeNode* root1=new TreeNode(1);
    root1->left=new TreeNode(2);
    root1->right=new TreeNode(3);
    root1->left->left=new TreeNode(4);
    root1->left->right=new TreeNode(5);
    root1->right->left=new TreeNode(6);
    cout<<leafSimilar(root1,root1);
    return 0;
}