/* problem statement : https://leetcode.com/problems/rotate-array/ */

class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int a =k%v.size();  // get the no. of rotation required
        reverse(v.begin(),v.end());  // reverse the whole array
        reverse(v.begin(),v.begin()+a); // now reverse the 'a' element from starting
        reverse(v.begin()+a,v.end()); // then reverse the rest element
    }
};
