/*
Problem: Left Rotate Array by K Places
Platform: GFG
Difficulty: Easy
Approach: Reversal Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    k = k % n;

    vector<int> temp;

    for (int i = 0; i < k; i++) {
        temp.push_back(arr[i]);
    }

    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    return arr;
}
