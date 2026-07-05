// uper bond is that smallest index where value of arr[i]>target
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int ans = arr.size();
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > target) {   // only changed condition
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