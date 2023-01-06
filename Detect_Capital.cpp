/* problem statement : https://leetcode.com/problems/detect-capital/ */

class Solution {
public:
    bool detectCapitalUse(string word) 
    {
      int l = word.length();
      int cap=0;int small=0;
      for(int i=0;i<l;i++)
      {
        if(islower(word[i]))   
            small++;
        else 
            cap++;
       }
    if(cap==l||small==l||(isupper(word[0])&&small==l-1))
        return true;
    else    
      return false;
    
    }
};
