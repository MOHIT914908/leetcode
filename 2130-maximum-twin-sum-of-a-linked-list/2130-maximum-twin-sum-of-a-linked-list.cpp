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
    int pairSum(ListNode* head) {
     vector<int>v;
        int sum=0;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<v.size()/2;i++)
        {
            sum=max(sum,v[i]+v[v.size()-1-i]);
        }
        return sum;
    }
};