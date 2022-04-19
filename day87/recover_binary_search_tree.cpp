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

void recoverTree(TreeNode* root){
    if(root == NULL)
        return;
    TreeNode *prev = NULL, *first = NULL, *second = NULL;
    TreeNode *cur = root;
    while(cur != NULL){
        if(cur->left == NULL){
            if(prev != NULL && prev->val > cur->val){
                if(first == NULL)
                    first = prev;
                second = cur;
            }
            prev = cur;
            cur = cur->right;
        }
        else{
            TreeNode *tmp = cur->left;
            while(tmp->right != NULL && tmp->right != cur){
                tmp = tmp->right;
            }
            if(tmp->right == NULL){
                tmp->right = cur;
                cur = cur->left;
            }
            else{
                tmp->right = NULL;
                if(prev != NULL && prev->val > cur->val){
                    if(first == NULL)
                        first = prev;
                    second = cur;
                }
                prev = cur;
                cur = cur->right;
            }
        }
    }
    int tmp = first->val;
    first->val = second->val;
    second->val = tmp;  
}

void recoverTree(TreeNode* root){

}