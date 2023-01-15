/* problem statement : https://leetcode.com/problems/remove-nth-node-from-end-of-list/ */


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*ptr=head,*cur=head;
        int count=0,pre;
        while(ptr!=NULL)
        {
           count++;
           ptr=ptr->next;
        }
        pre=count-n;
        n=count-n+1;
        ptr=head;
        for(int i=1; i<=n; i++)
        {   
            if(pre==0)
            {
                head=head->next;
            }
            if(i<pre)
              ptr=ptr->next;
            cur=cur->next;
        }
        ptr->next=cur;
        return head;
    }
};
