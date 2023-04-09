/*problem statement :https://leetcode.com/problems/merge-nodes-in-between-zeros/ */


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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* start = head->next;
        ListNode* ptr = head->next;
        int sum = 0;
        while(start!=NULL)
        {
          if(start->next==NULL)
             ptr->next = NULL;
          if(start->val == 0)
          {
            ptr->val = sum;
            ptr=ptr->next;
            sum=0;
          }
          else
            sum+=start->val;
          start = start ->next;
        }
        return head->next;
    }
};
