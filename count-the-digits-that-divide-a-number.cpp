/* problem statement : https://leetcode.com/problems/count-the-digits-that-divide-a-number/

class Solution {
public:
    int countDigits(int num) {
        int temp=num,ans=0,digit;
        while(temp>0)
        {
            digit=temp%10;
            if(num % digit==0)
               ans++;
            temp/=10;
        }
       return ans; 
    }
};
