/* problem statement : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/ */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size(),i;
        if(n==0)
           return {-1,-1};
    
        for( i=0; i<n; i++)
        {
            if(nums[i]==target)
            {
               ans.push_back(i);
               break;
            }
            else
            {
              if(nums[i]>target)
              {
                 return {-1,-1};
              }
              else if(nums[i]<target&& i==n-1)
              {
                  return {-1,-1};
              }
            }
        }
        for(int j=i;j<n;j++)
        {
            if(j==n-1)
            {
                ans.push_back(j);
            }
            else if(nums[j+1]!=target)
            {
                ans.push_back(j);
                break;
            }
        }
       return ans;
    }
};
