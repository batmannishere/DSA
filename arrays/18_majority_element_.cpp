/*
Problem: Majority Element I
Platform: LeetCode/GFG
Difficulty: Easy
Approach: Moore's Voting Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1;
        int cnt=0;
        int ele;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                ele=nums[i];
                
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==ele){
                cnt1++;
            }
        }
        if(cnt1>(n/2)){
            return ele;
        }
        else{
            return -1;
        }
        
    }
};