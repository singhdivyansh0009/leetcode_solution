/* problem statement : https://leetcode.com/problems/length-of-last-word/ */

class Solution {
public:
    int lengthOfLastWord(string s)
    {
       int count = 0,len =0;
        for(int i=0;i<s.length();i++)
        {
           /* if character is not equal to space it means its a part of a word then start counting */
              if(s[i]!=' ')
                count++;   
            
          /* if character is equal to space and count is not equal to zero it means a substring or  word is completed */
              if(s[i]==' '&&count!=0)
              {
                len = count;   /* so put the count into the len which means it is taken length of the last word if there is not any further words */
                count = 0;    /* and initialize the count with zero to start the counting for new further word */
              }
        }
        /* if second if condition is never be true then put the count into the len which means it is taken length of the last word */
        if(count!=0)
          len = count;
     return len;
    }
    
};
