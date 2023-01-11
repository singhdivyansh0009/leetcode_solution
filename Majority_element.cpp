/* Problem statement : https://leetcode.com/problems/majority-element/ */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1,m=0,ans;
        sort(nums.begin(),nums.end());
        if(n<=2)
        {
            return nums[0];
        }
        for(int i=m; i<n; i++)
        {
            if((nums[i]!=nums[i+1] ))
            {
                m=i+1;
            }
            if(count>n/2)
            {
                ans = nums[i];
                   break;
            }
           count++;
        }
        return ans;
    }
};
