/*
Problem: Check if the Array is Sorted
Platform: GFG
Difficulty: Easy
Approach: Linear Scan
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
        
    }
};