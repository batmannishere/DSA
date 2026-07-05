class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int ans1 = -1;
        int ans2 = arr.size();
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= target) {
                ans1 = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
         }
         if (ans1 == -1 || arr[ans1] != target)
        return 0;
         low = 0;
         high = arr.size() - 1;
         while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > target) {   // only changed condition
                ans2 = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        
        return ans2-ans1;
        
    }
};