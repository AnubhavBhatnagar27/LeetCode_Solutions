// Leetcode Solution
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        unordered_map<int , bool> hash;
        int p=0;
        for(int i=0;i<str2.length();i++){
            bool flag=false;
            for(int j=p;j<str1.length();j++){
                int d=-1;
                if(hash[j]==false && str2[i]=='a' && str1[j]=='z'){
                    d=1;
                }
                else if(hash[j]==false){
                    d=str2[i]-str1[j];
                }
                if(d==0 || d==1){
                    hash[j]=true;
                    p=j;
                    flag=true;
                    break;
                }


            }
            if(flag==false) return false;
        }
        return true;
    }
};