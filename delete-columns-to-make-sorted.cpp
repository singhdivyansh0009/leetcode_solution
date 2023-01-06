/* problem statement : https://leetcode.com/problems/delete-columns-to-make-sorted/  */

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        int n = strs[0].length() , m = strs.size();
        for(int i=0; i<n ;i++)
        {
            for(int j=0; j<m-1;j++)
            {
                if(strs[j][i]>strs[j+1][i])
                   count++;
                   break;
            }
        }
        return count;
    }
};
