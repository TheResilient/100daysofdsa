#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n){
    ListNode *node = head, *offsetNode = head;
    for (int i = 0; i < n; ++i)
        node = node->next;

    if (node == NULL)
        return head->next;

    while (node->next != NULL)
    {
        node = node->next;
        offsetNode = offsetNode->next;
    }

    offsetNode->next = offsetNode->next->next;

    return head;
}

int main(){
    ListNode* head = new ListNode(1);  
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode* ans = removeNthFromEnd(head, 2);
    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans = ans->next;
    }
    return 0;

}