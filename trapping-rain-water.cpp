/* problem statement : https://leetcode.com/problems/trapping-rain-water/ */

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int max_left=height[0],max_right=(height[n-1]);
        vector<int>left;
        vector<int>right;   
        for(int i=0,j=n-1; i<n; i++,j--)
        {
           if(height[i]>max_left)
            {
                max_left=height[i];
            }
            if(height[j]>max_right)
            {
                max_right=height[j];
            }
            left.push_back(max_left);
            right.insert(right.begin(),max_right);
        }
        int trap=0;
        for(int i=0; i<n; i++)
        {
            trap+=min(left[i],right[i])-height[i];
        }
      return trap;
    }
};
