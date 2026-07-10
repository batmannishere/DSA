class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int xr=0;
        int x;
        int cnt=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            xr=xr^arr[i];
            x=xr^k;
            if(mp.find(x)!=mp.end()){
               cnt += mp[x];
            }
            else if( xr==k){
                cnt++;
            }
           
            mp[xr]++;
        }
        return cnt;
        
    }
};