class Solution {
public:
    bool isPalindrome(int x) {
        int onum=x;
        long long reverse=0;
        if(x<0|| (x!=0 &&x%10==0)) return false;
        while(x>0){
        int digit=x%10;
        reverse = digit+(reverse*10);
        x=x/10;
        }
     if(onum==reverse){
        return true;
    }
    else {
        return false;
    }
    }
    
         
};