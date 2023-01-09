/* problem statement : https://leetcode.com/problems/contains-duplicate */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          sort(nums.begin(),nums.end());
         int n=nums.size();
         int m=0;
          for(int i=m; i<n-1; i++)
          {
                if(nums[i]==nums[i+1])  /*because the array is sorted first so, if next element is same then its duplicate */
                {
                   return true;
                }
                m=i+1;   /* if next element is not same then search next element */
          }
          return false;
    }

};
