//Given two integers num1 and num2, return the sum of the two integers.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        num1+=num2;
        cout<<num1;
        return 0;
    }
};
int main(){
    Solution s1;
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter a number:";
    cin>>b;
    s1.sum(a,b);

return 0;
}

//Leetcode Submitted Solution
class Solution {
public:
    int sum(int num1, int num2) {
        return num1+=num2;
    }
};