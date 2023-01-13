/* problem statement : https://leetcode.com/problems/move-zeroes/ */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),i=0;
        while(i<n)
        {
             if(nums[i]==0)
             {
               nums.erase(nums.begin()+i);
               nums.push_back(0);
               n--;
             }
             else
                i++;
        }
    }
};
