/* problem statement : https://leetcode.com/problems/add-two-numbers/description/ */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1,*ptr2,*prev;
        int carry=0;
        ptr1=l1;
        ptr2=l2;
        while(ptr1!=NULL&&ptr2!=NULL)
        {
            ptr1->val+=ptr2->val+carry;
            carry=0;
            if(ptr1->val>9)
            {
             carry=ptr1->val/10;
             ptr1->val=ptr1->val%10;
            }
            prev=ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        while(ptr1!=NULL)
        {
           ptr1->val+=carry; 
           carry=0;
           if(ptr1->val<10)
              return l1;
            else
            {
              carry=ptr1->val/10;
              ptr1->val=ptr1->val%10; 
            }
            prev=ptr1;
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL)
        {
            prev->next=ptr2;
            ptr2->val+=carry; 
           carry=0;
           if(ptr2->val<10)
              return l1;
            else
            {
              carry=ptr2->val/10;
              ptr2->val=ptr2->val%10; 
            }
            prev=ptr2;
            ptr2=ptr2->next;
        }
        if(carry!=0)
        {
           ListNode* new_node=new ListNode(carry);
           prev->next=new_node;
        }
        return l1;
    }
};
