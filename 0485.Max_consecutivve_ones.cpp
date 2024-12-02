// Leetcode Solution
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                maxc++;
            }
            else{
                count=max(count,maxc);
                maxc=0;
            }
        }
        count=max(count,maxc);
        return count;

    }
};