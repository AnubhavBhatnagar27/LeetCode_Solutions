// Leetcode Solution
class Solution {
public:
    int maximumLength(string s) {
        map<string,int> count;
        for(int st=0;st<s.length();st++){
            string currString;
            for(int end=st;end<s.length();end++){
                if(currString.empty() || currString.back()==s[end]){
                    currString.push_back(s[end]);
                    count[currString]++;
                }
                else{
                    break;
                }
            }
        }
        int ans=0;
        for(auto i:count){
            string str=i.first;
            if(i.second>=3 && str.length()>ans) ans=str.length();
        }
        if(ans==0) return -1;
        return ans;
    }
};