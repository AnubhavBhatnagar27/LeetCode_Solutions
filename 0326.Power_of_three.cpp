// Leetcode Solution
class Solution {
public:
    bool isPowerOfThree(int n) {
        long long ans=1;
        for(int i=1;i<=30;i++){
            if(ans==n){
                return true;
            }            
            ans=ans*3;
        }
        return false;
    }
};