// Leetcode Solution
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>ans;
        int m=nums1.size();
        int n=nums2.size();
        for(auto it1 : nums1){
            ans.push_back(it1);
        }
        for(auto it2 : nums2){
            ans.push_back(it2);
        }
        sort(ans.begin(),ans.end());
        int x=ans.size();
        if(x%2==0){
        double y=(ans[x/2]+ans[(x-2)/2])/2.0;
        return y;
        }
        return ans[x/2];
    }
};