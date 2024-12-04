// Leetcode Solution
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0, current_end = 0, farthest = 0;

        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + nums[i]);
            if (i == current_end) {
                ++jumps;
                current_end = farthest;
            }
        }
        return jumps;
    }
};