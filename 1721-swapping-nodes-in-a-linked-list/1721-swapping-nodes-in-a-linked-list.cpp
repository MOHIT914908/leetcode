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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *f=head;
        ListNode *n=NULL;
        ListNode *l=head;
        while(--k){
            f=f->next;
        }
        n=f;
        f=f->next;
        while(f){
            f=f->next;
            l=l->next;
        }
        swap(n->val,l->val);
        return head;
        
    }
};
