/*
Problem: Find Missing Number
Platform: LeetCode/GFG
Difficulty: Easy
Approach: Sum/XOR
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int missingNum(vector<int>& arr) {
      int xor1=0;
      int xor2=0;
      for(int i=0;i<arr.size();i++){
          xor1=xor1^arr[i];
      }
      for(int i=1;i<=arr.size()+1;i++){
          xor2=xor2^i;
      }
     return xor1^xor2;
        
    }
};