/*
Problem: Leaders in an Array
Platform: GFG
Difficulty: Medium
Approach: Traverse from Right
Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
   int max=INT_MIN;
   vector<int>ans;
   for(int i=n-1;i>=0;i--){
       if(elements[i]>max){
           ans.push_back(elements[i]);
           max=elements[i];
       }
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
