/*
Problem: Stock Buy and Sell
Platform: LeetCode/GFG
Difficulty: Medium
Approach: Greedy
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min =INT_MAX;
        int maxprofit=INT_MIN;
        int cost;
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            cost=prices[i]-min;
            maxprofit=max(maxprofit,cost);
        }
        return maxprofit;
    }
};