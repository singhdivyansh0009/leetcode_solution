/* problem statement : https://leetcode.com/problems/alternating-digit-sum/ */

class Solution {
public:
    int alternateDigitSum(int n) {
        stack<int>s;
        while(n>0)
        {
          s.push(n%10);
          n/=10;
        }
        int i=1,sum=0;
        while(!s.empty())
        {
            if(i%2==1)
              sum+=s.top();
            else
              sum+=(-(s.top()));
            s.pop();
            i++;
        }
        return sum;
    }
};
