// Leetcode Solution
class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score=0;
        int n=nums.size();
        deque<int> q;
        for(int i=0;i<n;i++){
            if(!q.empty() && nums[i]>=q.back()){
                bool skip=false;
                while(!q.empty()){
                    int add=q.back();
                    q.pop_back();
                    if(!skip){
                        score+=add;
                    }
                    skip=!skip;
                }
                continue;
            }
            q.push_back(nums[i]);
        }
        bool skip=false;
        while(!q.empty()){
            int add=q.back();
            q.pop_back();
            if(!skip){
                score+=add;
            }
            skip=!skip;
        }
        return score;
    }
};