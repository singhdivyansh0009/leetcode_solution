/* problem statement : https://leetcode.com/problems/array-partition/ */

/* APPROACH :
   if we sort the array all the minimum elements of pairs for max sum 
   comes at the even index.
   so we have to increase the index by 2 and sum the element of that index.
   For example :
    3,1,6,8 is an given array
    After sorting : 1,3,6,8
    possible pairs : 1,3  6,8  : sum of min = 1 + 6 = 7
                     1,6  3,8  : sum of min = 1 + 3 = 4
                     1,8  3,6  : sum of min = 1 + 3 = 4
    so max sum = 7;
    if we noticed the pair of sum 7 there 2 min number are 1 and 6 
    which is present at 0  and  2 index which is even index similarly
    you can do with other examples
*/

   

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i+=2)
        {
           ans+=nums[i];
        }
      return ans;
    }
};
