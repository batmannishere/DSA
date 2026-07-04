/*
Problem: Left Rotate Array by One
Platform: GFG
Difficulty: Easy
Approach: Temporary Variable
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
        int temp=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
        return arr;
}