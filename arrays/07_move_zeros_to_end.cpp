/*
Problem: Move Zeros to End
Platform: LeetCode/GFG
Difficulty: Easy
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};