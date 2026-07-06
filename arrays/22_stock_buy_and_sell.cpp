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
        int n= prices.size();
        int mini = prices[0];
        int maxprofit=0; // to chck btw cost and profit
        int cost; // this after buying and selling
        for(int i=0;i<n;i++){
           cost=prices[i]-mini; // checking what cost comes after buying and selling
           maxprofit= max(cost,maxprofit); // checking
           mini=min(mini,prices[i]);// we will check if mini should be updated before moving forward
        }
        return maxprofit;
    }
};