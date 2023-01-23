/* problem statement : https://leetcode.com/problems/power-of-two/ */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0 && !(n&(n-1)))
          return true;
        else
          return false;
    }
};
