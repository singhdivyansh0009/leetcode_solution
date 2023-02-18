/*problem statement : https://leetcode.com/problems/remove-duplicates-from-sorted-array/ */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        return nums.size();
    }
};
