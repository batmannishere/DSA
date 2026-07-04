/*
Problem: Longest Subarray with Sum K
Platform: LeetCode/GFG
Difficulty: Medium
Approach: Prefix Sum + Hash Map
Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    map<long long,int>presum;
    long long sum =0;
    int maxlen=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
        long long rem=sum-k;
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        if(presum.find(rem)!=presum.end()){
                int len=i-presum[rem];
                maxlen=max(maxlen,i-presum[rem]);
            }
        if(presum.find(sum) == presum.end()){
                presum[sum]=i;
            }
        }
    
    return maxlen;
}