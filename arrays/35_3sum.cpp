class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
             int k=nums.size()-1;
             int j=i+1;
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(j<k){
             sum=nums[i]+nums[j]+nums[k];
                if(sum==0) {
            ans.push_back({nums[i], nums[j], nums[k]});
            j++;
             k--;
                     while (j<k &&nums[k]==nums[k+1]) {k--;}
                      while(j<k && nums[j]==nums[j-1]) {j++;}
                }
                else if (sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans ;
    }
};