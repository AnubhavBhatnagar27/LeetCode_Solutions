// Leetcode Solution
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        int l = intervals[0][0];
        int r = intervals[0][1];

        if(n == 1){
            return intervals;
        }
        vector<vector<int>> ans;
        int i;
        for(i = 1; i<n; i++){
             if(r <intervals[i][0]){
                ans.push_back({l, r});
                l = intervals[i][0];
                r = intervals[i][1];
             }
             else if(r >= intervals[i][0] && r<= intervals[i][1]){
                r = intervals[i][1];
             }
        }
        ans.push_back({l, r});;
        return ans;
    }
};