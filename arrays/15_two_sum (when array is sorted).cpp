/*
Problem: Two Sum (When Array is Sorted)
Platform: LeetCode/GFG
Difficulty: Easy
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                return {left, right};    // Use {left + 1, right + 1} for LeetCode 167
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {-1, -1};
    }
};
