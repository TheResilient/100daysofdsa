#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
    public:
        Node* bToDLL(Node* root){
            if(root==NULL)
                return NULL;
            if(root->left==NULL && root->right==NULL)
                return root;
            Node* temp=root;
            while(temp->left!=NULL)
                temp=temp->left;
            Node* temp2=temp->right;
            temp->right=NULL;
            temp->left=bToDLL(root);
            root->right=temp2;
            return temp;

        }
    
};