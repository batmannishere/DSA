// lower bound means the smallest index where arr[i]>=target
// how find a index with a lower bound lower_bound(arr.begin(),arr.end(),n)-arr.begin()
class Solution {
public:
    int lowerBound(vector<int>& arr, int target) {
        int ans = arr.size();
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};