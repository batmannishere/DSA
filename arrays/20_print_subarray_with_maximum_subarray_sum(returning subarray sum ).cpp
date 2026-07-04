/*
Problem: Maximum Subarray
Platform: LeetCode/GFG
Difficulty: Medium
Approach: Kadane's Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum<0){
                sum=0;
            }
            if(sum>maxi){
                maxi=sum;
            }
        }
        return maxi;
    }
};