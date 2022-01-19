#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode *detectCycle(ListNode *head){
    if(head == NULL || head->next == NULL) return NULL;
    ListNode *slow = head, *fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(fast->next == NULL || fast->next->next == NULL) return NULL;
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

int main(){
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = head->next->next;
    ListNode *res = detectCycle(head);
    if(res) cout << res->val << endl;
    else cout << "No cycle" << endl;
    return 0;
}