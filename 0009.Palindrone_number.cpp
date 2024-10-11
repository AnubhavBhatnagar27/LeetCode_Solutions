// Leetcode Solution
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long n=x;
        long long rev=0,digit;
        while(n!=0){
            digit=n%10;
            rev=(rev*10)+digit;
            n=n/10;
        }
        return (x==rev);
    }
};