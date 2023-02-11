/* problem statement : https://leetcode.com/problems/swap-nodes-in-pairs/ */

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
        ListNode* ptr=head,*temp=NULL;
        int t;
        if(head==NULL || head->next==NULL)
          return head;
        while(ptr!=NULL)
        {
            if(ptr->next==NULL)
               return head;
            temp=ptr->next->next;
            t=ptr->val;
            ptr->val=ptr->next->val;
            ptr->next->val=t;
            ptr=temp;   
        }
      return head;
    }
};
