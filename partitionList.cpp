/* problem statement : https://leetcode.com/problems/partition-list/ */

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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ptr = head;
        queue<int>q;
        queue<int>Q;
        while(ptr!=NULL)
        {
            if((ptr->val)<x)
               q.push(ptr->val);
            else
               Q.push(ptr->val);
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=NULL)
        {
            if(!q.empty())
            {
               ptr->val=q.front();
               q.pop();
            }
            else
            {
               ptr->val=Q.front();
               Q.pop();
            }   
            ptr=ptr->next;
        }
        return head;
    }
};
