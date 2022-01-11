#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergetTwoLists(ListNode* list1, ListNode* list2){
    ListNode* head = new ListNode(0);
    ListNode* cur = head;
    while(list1 && list2){
        if(list1->val < list2->val){
            cur->next = list1;
            list1 = list1->next;
        }
        else{
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }
    if(list1){
        cur->next = list1;
    }
    else{
        cur->next = list2;
    }
    return head->next;
}

int main(){
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    ListNode* res = mergetTwoLists(list1, list2);
    while(res){
        cout << res->val << " ";
        res = res->next;
    }
    cout << endl;
    return 0;
}