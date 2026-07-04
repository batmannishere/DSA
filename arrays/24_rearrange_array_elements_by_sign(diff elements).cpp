
/*
Problem: Rearrange Array Elements by Sign
Platform: LeetCode/GFG
Difficulty: Medium
Approach: Two Arrays / Optimal Placement
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        for (int x : nums) {
            if (x > 0) pos.push_back(x);
            else neg.push_back(x);
        }

        int i = 0, p = 0, n = 0;

     (p < pos.size() && n < neg.size()) {
            nums[i++] = pos[p++];
            nums[i++] = neg[n++];
        }

        
        while (p < pos.size()) {
            nums[i++] = pos[p++];
        }

       
        while (n < neg.size()) {
            nums[i++] = neg[n++];
        }

        return nums;
    }
};