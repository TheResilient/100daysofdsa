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


int dfs(TreeNode *n, int id, int d, vector<int> &lefts)
{ // d : depth
    if (!n)
        return 0;
    if (d >= lefts.size())
        lefts.push_back(id); // add left most node
    return max({id + 1 - lefts[d], dfs(n->left, id * 2, d + 1, lefts), dfs(n->right, id * 2 + 1, d + 1, lefts)});
}

int widthOfBinaryTree(TreeNode *root)
{
    vector<int> lefts; // left most nodes at each level;
    return dfs(root, 1, 0, lefts);
}



int main(){
    TreeNode* root = new TreeNode();
    
}