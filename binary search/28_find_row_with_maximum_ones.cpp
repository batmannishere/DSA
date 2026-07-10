class Solution {
  public:
  int upperBound(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > 0) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}
    int rowWithMax1s(vector<vector<int>> &arr) {
        int ans=-1;
        int index=INT_MIN;
        int maxi=0;
        int n= arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
             index=upperBound( arr[i]);
            int noones=m-index;
            if(noones>maxi){
                maxi=noones;
                ans=i;
            }
        }
        return ans;
        
    }
};