/* problem statement : https://leetcode.com/problems/remove-element/ */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        vector<int>temp;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=val)
            {
               temp.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0; i<temp.size(); i++)
            nums.push_back(temp[i]);
      return nums.size();
    }
};
