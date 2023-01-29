/* problem statement : https://leetcode.com/problems/palindrome-linked-list/ */ 

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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr=head;
        stack<int>check;
        while(ptr!=NULL)
        {
            check.push(ptr->val);
            ptr=ptr->next;
        }
        while(head!=NULL)
        {
            if(head->val!=check.top())
               return false;
            check.pop();
            head=head->next;
        }
       if(check.empty())
         return true;
        else
         return false;
        
    }
};
