#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){} 
    ListNode(int x) : val(x), next(nullptr){} 
    ListNode(int x, ListNode *next) : val(x), next(next){}
};

// ListNode* deleteDuplicates(ListNode* head){
//     if(head == nullptr || head->next == nullptr) return head;
//     ListNode* cur = head;
//     while(cur!=nullptr){
//         ListNode* next = cur->next;
//         while(next!=nullptr){
//             if(cur->val == next->val){
//                 cur->next = next->next;
//                 next = next->next;
//             }
//             else{
//                 cur = next;
//                 next = next->next;
//             }
//         }
//         cur->next = next;
//         cur = next;
//     }
//     return sortList(head);
// }

ListNode *deleteDuplicates(ListNode *head)
{
    if (!head)
        return 0;
    if (!head->next)
        return head;

    int val = head->val;
    ListNode *p = head->next;

    if (p->val != val)
    {
        head->next = deleteDuplicates(p);
        return head;
    }
    else
    {
        while (p && p->val == val)
            p = p->next;
        return deleteDuplicates(p);
    }
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    ListNode* res = deleteDuplicates(head);
    while(res){
        cout<<res->val<<" ";
        res = res->next;
    }
    cout<<endl;
    return 0;
}