/* https://leetcode.com/problems/odd-even-linked-list/ */

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL|| head->next==NULL || head->next->next == NULL)
           return head;
        ListNode* even = head->next;
        ListNode* e = head->next;
        ListNode* o = head;
        while(e!=NULL)
        {
            o->next = e->next;
            o = o->next;
            e->next = o->next;
            e = e->next;
            if(e==NULL||e->next==NULL)
            {
                o->next = even;
                break;
            }
        }
        return head;
    }
};
