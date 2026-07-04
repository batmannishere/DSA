/*
Problem: Largest Element
Platform: GFG
Difficulty: Easy
Approach: Linear Scan
Time Complexity: O(n)
Space Complexity: O(1)
*/
int largest(int arr[], int n) {
    int large=0;
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    return large;
    
}