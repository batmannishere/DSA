// CEIL is when arr[i]>=target(lower bound)
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int ans=-1;
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            
            if(arr[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};