#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution {
    public:
        ListNode * head;
        Solution(ListNode* head) {
            ListNode* head = head;
        }
        int getRandom() {
            ListNode* curr = head;
            int res = 0;
            int cnt = 0;
            while(curr){
                if(rand()%(++cnt)==0) res = curr->val;
                curr = curr->next;
            }
            return res;
        }