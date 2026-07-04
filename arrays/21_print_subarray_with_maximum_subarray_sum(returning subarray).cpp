/*
Problem: Print Maximum Subarray
Platform: GFG
Difficulty: Medium
Approach: Kadane's Algorithm + Indices
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;

        int start = 0, end = 0, tempStart = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum > maxi) {
                maxi = sum;
                start = tempStart;
                end = i;
            }

            if (sum < 0) {
                sum = 0;
                tempStart = i + 1;
            }
        }

        vector<int> ans;
        for (int i = start; i <= end; i++) {
            ans.push_back(nums[i]);
        }

        return ans;
};
