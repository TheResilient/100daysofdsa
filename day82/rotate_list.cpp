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

ListNode *rotateRight(ListNode *head, int k)
{
    if (!head)
        return head;

    int len = 1; // number of nodes
    ListNode *newH, *tail;
    newH = tail = head;

    while (tail->next) // get the number of nodes in the list
    {
        tail = tail->next;
        len++;
    }
    tail->next = head; // circle the link

    if (k %= len)
    {
        for (auto i = 0; i < len - k; i++)
            tail = tail->next; // the tail node is the (len-k)-th node (1st node is head)
    }
    newH = tail->next;
    tail->next = NULL;
    return newH;
}
// 2 4 3 5 6 4 ==> 4 2 4 3 5 6 ==> 6 4 2 4 3 5
int main(){
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* res = rotateRight(l1, 2);
    while(res){
        cout << res->val << " ";
        res = res->next;
    }
    cout << endl;
    return 0;
}