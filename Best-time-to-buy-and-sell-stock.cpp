/*problem statement : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), min_price = INT_MAX, max_profit=0, profit;
        for(int i=0; i<n-1; i++)
        {
           if(prices[i]<min_price)
           {
               min_price=prices[i];  
           }
           profit = prices[i+1]-min_price;
           if(profit > max_profit)
             max_profit = profit;
        }
        return max;
    }
};
