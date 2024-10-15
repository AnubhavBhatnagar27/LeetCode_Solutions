// Leetcode Solution
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int t;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]<nums[j]){
                    t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                }
            }
        }
    }
};