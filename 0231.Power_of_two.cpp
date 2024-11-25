// Leetcode Solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        return  (n>0 && (n & (n-1))==0) ? true:false;
    }
};

// Leetcode Solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        for(long int i=1;i<=n;i=2*i){
            if(i==n){
                return true;
            }
        }
    return false;
    }
};