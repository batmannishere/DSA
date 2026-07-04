/*
Problem: Longest Subarray with Given Sum K (Positives)
Platform: GFG
Difficulty: Medium
Approach: Sliding Window
Time Complexity: O(n)
Space Complexity: O(1)
*/
int longestSubarrayWithSumK(vector<int> a, long long k) {
     int n = a.size();
        
        int maxLen = 0;
        
        int left = 0, right = 0;
        
        long long sum = a[0];
        
        while(right < n) {
            
            while(left <= right && sum > k) {
                sum -= a[left];
                left++;
            }
            
            if(sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            
            right++;
            if(right < n) sum += a[right];
        }
        
        return maxLen;
}