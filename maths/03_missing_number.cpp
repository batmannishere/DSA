//letcode-268
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=1;

        for(int i=0;i<nums.size();i++){
            xor1=xor1^nums[i];
        }
        for(int i=2;i<nums.size()+1;i++){
            xor2=xor2^i;
        }
     return xor1^xor2;
    }
};