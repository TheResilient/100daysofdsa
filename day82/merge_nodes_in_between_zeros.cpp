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

ListNode *mergeNodes(ListNode *head)
{
    ListNode *res = new ListNode(0);
    ListNode *ret = res;
    int sm = 0;
    head = head->next;

    while (head != NULL)
    {
        if (head->val == 0)
        {
            res->next = new ListNode(sm);
            res = res->next;
            sm = 0;
        }
        else
        {
            sm += head->val;
        }
        head = head->next;
    }

    return ret->next;
}

int main(){
    ListNode* l1 = new ListNode(0);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(0);
    l1->next->next->next = new ListNode(5);
    l1->next->next->next->next = new ListNode(0);
    ListNode* res = mergeNodes(l1);
    while(res){
        cout << res->val << " ";
        res = res->next;
    }
    cout << endl;
    return 0;
}