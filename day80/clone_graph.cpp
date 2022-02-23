#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    vector<Node*> neighbors;
    // Node(){}
    Node(){
        val = 0;
        neighbors=vector<Node*>();
    }
    Node(int _val){
        val=_val;
        neighbors=vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors){
        val=_val;
        neighbors=_neighbors;
    }
};

Node* cloneGraph(Node* node){
    if(node==NULL) return NULL;
    unordered_map<Node*,Node*> m;
    queue<Node*> q;
    q.push(node);
    m[node]=new Node(node->val);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        for(Node* n:curr->neighbors){
            if(m.find(n)==m.end()){
                m[n]=new Node(n->val);
                q.push(n);
            }
            m[curr]->neighbors.push_back(m[n]);
        }
    }
    return m[node];
}

int main(){
    Node* n1=new Node(1);
    Node* n2=new Node(2);
    Node* n3=new Node(3);
    Node* n4=new Node(4);
    Node* n5=new Node(5);
    Node* n6=new Node(6);
    Node* n7=new Node(7);
    n1->neighbors.push_back(n2);
    n1->neighbors.push_back(n3);
    n2->neighbors.push_back(n4);
    n2->neighbors.push_back(n5);
    n3->neighbors.push_back(n6);
    n3->neighbors.push_back(n7);
    Node* n=cloneGraph(n1);
    return 0;
}