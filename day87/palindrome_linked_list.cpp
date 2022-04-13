#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *temp;
bool check(ListNode *p)
{
    if (NULL == p)
        return true;
    bool isPal = check(p->next) & (temp->val == p->val);
    temp = temp->next;
    return isPal;
}
bool isPalindrome(ListNode *head)
{
    temp = head;
    return check(head);
}


int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(1);
    cout<<isPalindrome(head);
    return 0;
}
