//floor if arr[i]<=target

class Solution {
  public:
    int findFloor(vector<int>& arr, int target) {
        int ans = arr.size();
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= target) {
                ans = mid;
                low = mid + 1;
            }

            else  {
                high = mid - 1;
            }
           
        }
        if(ans==arr.size()) return -1;

        return ans;
        
    }
};