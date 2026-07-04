/*
Problem: Find the Number that Appears Once
Platform: LeetCode/GFG
Difficulty: Easy
Approach: XOR
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int num : nums){
            ans ^= num;
        }

        return ans;
    }
};