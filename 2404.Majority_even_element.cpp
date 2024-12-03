// Leetcode Solution
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            if(i%2==0){
                mp[i]++;
            }
        }
        if(mp.size()==0) return -1;
        int max=0,a=-1;
        for(auto i:mp){
            if(i.second > max || (i.second == max && i.first < a)){
                max=i.second;
                a=i.first;
            }
        }
        return a;
    }
};