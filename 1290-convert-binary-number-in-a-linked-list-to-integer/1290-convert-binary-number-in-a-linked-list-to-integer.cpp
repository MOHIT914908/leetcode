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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        vector<int>num;
        while(temp!=NULL)
        {
            num.push_back(temp->val);
            temp=temp->next;
        }
        int ans=0,c=1;
        for(int i=num.size()-1;i>=0;i--)
        {
            ans+=num[i]*c;
            c=c*2;
        }
        return ans;
    }
};