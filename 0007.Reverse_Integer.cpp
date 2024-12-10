// LeetCode Solution
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            int digit=x%10;
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+digit;
            x=x/10;
        }
        return ans;
    }
};

// Python Solution
class Solution:
    def reverse(self, x: int) -> int:
        sign=-1 if x<0 else 1
        n=abs(x)
        ans=0
        while n>0:
            digit=n%10
            ans=(ans*10)+digit
            n=n//10
        ans*=sign
        if ans>2**31-1 or ans<-2**31-1:
            return 0
        return ans