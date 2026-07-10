class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        map<int,int>mp;
       int sum=0;
       for(int i=0;i<arr.size();i++){
           sum=sum+arr[i];
           
           if(sum==0){
               return true;
           }
           if(mp.find(sum)!=mp.end()){
               return true;
           }
           
        mp[sum]=i;
       }
       return false;
        
    }
};