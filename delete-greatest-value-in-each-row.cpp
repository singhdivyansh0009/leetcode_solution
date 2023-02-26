/*problem_statement : https://leetcode.com/problems/delete-greatest-value-in-each-row/ */

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0; i<grid.size(); i++)
            sort(grid[i].begin(),grid[i].end());
            
        int max_r;
        for(int j=0; j<grid[0].size(); j++)
        {
          max_r=0;
            for(int i=0; i<grid.size(); i++)
            {
               max_r=max(max_r,grid[i][j]);
            }
          ans+=max_r;
        }
     return ans;
    }
};
