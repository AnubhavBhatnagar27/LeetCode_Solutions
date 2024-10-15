// Leetcode Solution
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int> ans(2,-1);

          int start = 0;
          int end = nums.size()-1;
          int foundindex = -1;
          while(start<=end){
               int mid = (start+end)/2;
               if(nums[mid]==target){
                  foundindex = mid;
                  break;
               }
               else if(nums[mid] > target){
                   end = mid-1;
               }
               else{
                   start = mid+1;
               }
          }

          if(foundindex!=-1){
              int j = foundindex;
              while(j>=0 && nums[j]==target){
                  j--;
              }
              ans[0] = j+1;
               int k = foundindex;
              while(k<nums.size()&& nums[k]==target){
                  k++;
              }
              ans[1] = k-1;
          }
    return ans;
    }
};