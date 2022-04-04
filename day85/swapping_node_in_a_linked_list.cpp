#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ListNode *swapNodes(ListNode *head, int k)
// {
//     ListNode *head1 = head;
//     ListNode *head2 = head;
//     ListNode *head3 = head;
//     int size = 0;
//     while (head1 != nullptr)
//     {
//         head1 = head1->next;
//         size++;
//     }
//     ListNode *res = new ListNode();
//     for (int i = 0; i < k - 1; i++)
//     {
//         head2 = head2->next;
//     }
//     int val1 = head2->val;
//     for (int i = 0; i < size - k; i++)
//     {
//         head3 = head3->next;
//     }
//     int val2 = head3->val;
//     for (int i = 0; i < size; i++)
//     {
//         if (i == k)
//         {
//             res->val = val2;
//             res = res->next;
//             head = head->next;
//         }
//         else if (i == size - k)
//         {
//             res->val = val1;
//             res = res->next;
//             head = head->next;
//         }
//         else
//         {
//             res->val = head->val;
//             head = head->next;
//             res = res->next;
//         }
//     }
//     return res;
// }

ListNode *swapNodes(ListNode *head, int k)
{
    ListNode *n1 = nullptr, *n2 = nullptr;
    for (auto p = head; p != nullptr; p = p->next)
    {
        n2 = n2 == nullptr ? nullptr : n2->next;
        if (--k == 0)
        {
            n1 = p;
            n2 = head;
        }
    }
    swap(n1->val, n2->val);
    return head;
}

int main(){
    ListNode* head;
    head->val=1;
    head->next->val=2;
    head->next->next->val=3;
    head->next->next->next->val=4;
    head->next->next->next->next->val=5;
    int k=2;
    ListNode* ans=swapNodes(head, k);
    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;

}