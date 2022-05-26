/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
     /*   if(head==NULL || head->next!=NULL)
        {
            return NULL;
        }*/
        
        if(!head)return {};
        ListNode *p=head;
        ListNode *q=head;
        ListNode *k=head;
        while(q->next!=NULL && q->next->next!=NULL)
        {
            q=q->next->next;
            p=p->next;
            if(p==q)
            {
                while(p!=k)
                {
                    p=p->next;
                    k=k->next;
                }
                return k;
            }
        }
        return NULL;
    }
};