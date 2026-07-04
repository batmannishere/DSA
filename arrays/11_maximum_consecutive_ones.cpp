/*
Problem: Maximum Consecutive Ones
Platform: LeetCode/GFG
Difficulty: Easy
Approach: Linear Scan
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max=0;
        for(int i=0;i<n;i++){
        if(nums[i]==1){
         count++; 
        if(count>max){
         max=count;
        }
        }
        else count=0;
        }
        return max;
    }
};