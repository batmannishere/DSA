/*
Problem: Two Sum
Platform: LeetCode/GFG
Difficulty: Easy
Approach: Hash Map
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                return{mpp[rem],i};
            }
             mpp[nums[i]] = i;
        }
        return{-1,-1};
    }
};