// Leetcode Solution
class Solution {
public:

    void divide(int l, int r, vector<int>& res, vector<pair<int, int>>& a){
        //base case
        if(l+1 == r) return;

        //divide
        int mid = (l+r)>>1;
        divide(l, mid, res, a);
        divide(mid, r, res, a);

        //compute
        int idx = mid;
        for(int i = l; i<mid; i++){
            while(idx < r && a[idx].first < a[i].first) idx++;
            res[a[i].second] += (idx - mid);
        }

        //merge
        int p1 = l, p2 = mid;
        vector<pair<int, int>> tmp(r-l+1);
        idx = 0;
        while(p1 < mid || p2 < r){
            if(p2 == r){
                tmp[idx] = a[p1];
                p1++;
            }
            else if(p1 == mid){
                tmp[idx] = a[p2];
                p2++;
            }
            else if(a[p2].first > a[p1].first){
                tmp[idx] = a[p1];
                p1++;
            }
            else{
                tmp[idx] = a[p2];
                p2++;
            }
            idx++;
        }
        for(int i = l, j = 0; i<r; i++, j++) a[i] = tmp[j];
    }

    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> pr(n);
        vector<int> res(n, 0);
        for(int i = 0; i<n; i++){
            pr[i] = {nums[i], i};
        }
        divide(0, n, res, pr);
        return res;
    }
};