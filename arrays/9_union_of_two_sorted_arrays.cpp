/*
Problem: Union of Two Sorted Arrays
Platform: GFG
Difficulty: Easy
Approach: Two Pointers
Time Complexity: O(n + m)
Space Complexity: O(n + m)
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