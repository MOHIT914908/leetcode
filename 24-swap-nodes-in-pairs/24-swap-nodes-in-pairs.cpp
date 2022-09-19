/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *first=head;
        ListNode *nxt=head->next;
        ListNode *prev=NULL;
        head=nxt;
        while(first && nxt){
            ListNode *temp=nxt->next;
            first->next=temp;
            nxt->next=first;
            if(prev)
            prev->next=nxt;
            prev=first;
            first=temp;
            if(first)
            nxt=first->next;
            else
            nxt=NULL;
        }
          return head;
    }
};