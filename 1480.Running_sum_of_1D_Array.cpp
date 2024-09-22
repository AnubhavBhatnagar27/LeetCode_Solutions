#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> results(nums.size());
        results[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            results[i]=nums[i]+results[i-1];
        }
        return results;
    }
};

int main(){
    Solution s1;
    int s;
    cout<<"Enter an Array length:";
    cin>>s;
   vector<int> nums(s); // Create a vector to hold the input values

    // Input values into the vector
    for (int j = 0; j < s; j++) {
        cout << "Enter the value of element " << j + 1 << ": ";
        cin >> nums[j];
    }

    // Compute the running sum
    vector<int> result = s1.runningSum(nums);

    // Display the result
    cout << "Running sum of the array is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

return 0;
}

// Leetcode Solution
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> results(nums.size());
        results[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            results[i]=nums[i]+results[i-1];
        }
        return results;
    }
};
