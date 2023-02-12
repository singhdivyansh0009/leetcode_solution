# problem statement : https://leetcode.com/problems/find-the-array-concatenation-value/ 

class Solution:
    def findTheArrayConcVal(self, nums: List[int]) -> int:
        i=0
        j=len(nums)-1
        result=0
        while(i<=j):
            if i!=j :
                result+=int(str(nums[i])+str(nums[j]))
            else:
                result+=nums[i]
            i=i+1
            j=j-1
        return result
