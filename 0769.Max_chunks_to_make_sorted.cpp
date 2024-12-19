// Leetcode Solution
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int chunks=0,prefixsum=0,sortedprefix=0;
        for(int i=0;i<n;i++){
            prefixsum+=arr[i];
            sortedprefix+=i;
            if(prefixsum==sortedprefix){
                chunks++;
            }
        }
        return chunks;
    }
};