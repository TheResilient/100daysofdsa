#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* sortList(ListNode* head){
    // sort Linked List
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* next=NULL;
    ListNode* sorted=NULL;
    ListNode* sorted_tail=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=NULL;
        if(sorted==NULL || sorted->val>curr->val){
            curr->next=sorted;
            sorted=curr;
        }else{
            prev=sorted;
            while(prev->next!=NULL && prev->next->val<curr->val){
                prev=prev->next;
            }
            curr->next=prev->next;
            prev->next=curr;
        }
        if(sorted_tail==NULL) sorted_tail=curr;
        curr=next;
    }
    return sorted;
}

int main(){
    ListNode* n1=new ListNode(4);
    n1->next=new ListNode(2);
    n1->next->next=new ListNode(1);
    n1->next->next->next=new ListNode(3);
    ListNode* n=sortList(n1);
    return 0;
}