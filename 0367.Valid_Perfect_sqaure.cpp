// LeetCode Solution
class Solution {
public:
    bool isPerfectSquare(int num) {
        long value = 1;
        
        while(value*value <= num){
            if(value*value == num)return true;
            value++;
        }
        return false;
    }
};