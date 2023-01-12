/* problem statement : https://leetcode.com/problems/search-insert-position/ */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),i,j,mid;
        i=0;
        j=n-1;
         while(i<=j)
         {
              mid=(i+j)/2;
             if(nums[mid] == target)
             {
                 return mid;
             }
             else if(target>nums[mid])
             {
                 i=mid+1;
             }
             else
             {
                 j=mid-1;
             }
            
         }
         if(target>nums[mid])
            return mid+1;
         else
           return mid;

    }
};
