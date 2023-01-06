/* problem statement : https://leetcode.com/problems/maximum-ice-cream-bars/description/ */
class Solution {
public:
    int maxIceCream(vector<int>& costs,  int coins) {
        sort(costs.begin(),costs.end());
        int max=0,i=0;
        for(int i=0;i<costs.size();i++)
        {
            if(costs[i]>coins)
            {
                return max;
            }
            else
            {
                max++;
                coins-=costs[i];
            }
        }
        return max;
    }
};
