// Leetcode Solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++){
            int n = matrix[0].size();
            int s = 0;
            int e = n-1;
            while(s<=e){
                int mid = s + (e-s)/2;
                cout<<i<<" "<<mid<<endl;
                if(matrix[i][mid] == target) return true; 
                if(matrix[i][mid]<target){
                    s = mid+1;
                }else e = mid-1;
            }
        }
        return false;
    }
};