/*
Problem: Longest Consecutive Sequence in an Array
Platform: LeetCode/GFG
Difficulty: Medium
Approach: Hash Set
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count =0;
        int largest=1;
        int n=nums.size();
        int smallest=INT_MIN;
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==smallest){
                count++;
                smallest=nums[i];
            }
            else if(nums[i]!=smallest){
                count =1;
                smallest=nums[i];
            }
             largest=max (largest,count);
        }
       return largest;

    }
};