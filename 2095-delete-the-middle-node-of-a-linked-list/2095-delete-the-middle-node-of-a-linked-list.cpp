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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        ListNode *s=head;
        ListNode *f=head;
        ListNode *prev=head;
        while(f!=NULL && f->next!=NULL)
        {
           if(s!=head) prev=prev->next;
            s=s->next;
            f=f->next->next;
        }
        prev->next=s->next;
        delete s;
        return head;
        
        
    }
};
