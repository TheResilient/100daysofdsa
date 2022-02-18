#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(NULL){}
    ListNode(int x):val(x),next(NULL){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};

ListNode* swapPairs(ListNode* head){
    if(head == NULL || head->next == NULL) return head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;
    ListNode* cur = head;
    ListNode* next = head->next;
    while(next){
        pre->next = next;
        cur->next = next->next;
        next->next = cur;
        pre = cur;
        cur = cur->next;
        if(cur == NULL) break;
        next = cur->next;
    }
    return dummy->next;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    ListNode* ans = swapPairs(head);
    while(ans!=NULL){
        cout<<ans->val<<" ";
        ans = ans->next;
    }
    return 0;
}