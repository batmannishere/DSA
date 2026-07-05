int recursion(vector<int>& arr, int low, int high, int target) {
    // Base case
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return recursion(arr, mid + 1, high, target);
    else
        return recursion(arr, low, mid - 1, target);
}

int low = 0;
int high = n - 1;

int ans = recursion(arr, low, high, target);