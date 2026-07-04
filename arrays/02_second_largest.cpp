/*
Problem: Second Largest Element
Platform: GFG
Difficulty: Easy
Approach: Two Variables
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<climits>
int getSecondLargest(int *arr, int n) {
    int largest = INT_MIN;
    int slargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > slargest && arr[i] < largest) {
            slargest = arr[i];
        }
    }

    return (slargest == INT_MIN) ? -1 : slargest;
}