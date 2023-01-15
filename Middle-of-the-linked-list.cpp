/* problem statement = https://leetcode.com/problems/middle-of-the-linked-list/ */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*ptr=head;
        int count=0,mid;
        while(ptr!=NULL)
        {
           count++;
           ptr=ptr->next;
        }
        mid=count/2;
        while(mid--)
        {
            head=head->next;
        }
        return head;
    }
};
