/*
Problem: Next Permutation
Platform: LeetCode/GFG
Difficulty: Medium
Approach: Pivot + Reverse
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){     // breaking point find krne ke liye as array decending order mei honi chaiye jaha pr bhi arr[i]<arr[i+1] woh breaking point hai
            if(nums[i]<nums[i+1]){
                ind =i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end()); // agar hame breaking point nhi mila puri array descending order mei hai toh reverse krdenge
            return ;
        }
        for(int i=n-1;i>ind;i--){   // if milgya then we will loop from end as we have to find the index just greater than that and piche se array descending order mei hai
            if(nums[ind]<nums[i]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end()); // array sort hogyi ab reverse krdenge
        return ;

    }
};
