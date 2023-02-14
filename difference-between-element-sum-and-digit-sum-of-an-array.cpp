/* problem statement : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/ */

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,dsum=0,n=nums.size();
           
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            while(nums[i]>0)
            {
                dsum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return sum-dsum;
    }
};
