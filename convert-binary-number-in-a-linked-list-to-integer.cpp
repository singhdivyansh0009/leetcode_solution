/* problem statement : https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/ */

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
        ListNode* ptr=head;
        int count = 0,ans=0;
        while(ptr!=NULL)
        {
          count++;
          ptr=ptr->next;
        }
        for(int i=count-1; i>=0; i-- )
        {
            ans+=pow(2,i) * (head->val);
            head=head->next;
        }
        return ans;
    }
};
