// Leetcode Solution
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        for(int i=1;i<=INT_MAX;i++){
            if(isBadVersion(i)==true){
                return i;
                break;
            }
        }
        return -1;
    }
};