/*
Given an array nums of n integers, return reverse of the array.

Example 1:
Input : nums = [1, 2, 3, 4, 5]

Output : [5, 4, 3, 2, 1]

Example 2:
Input : nums = [1, 3, 3, 3, 5]

Output : [5, 3, 3, 3, 1]
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> reverseArray(vector<int>& nums){
           reverse(nums,0,nums.size()-1);
           return nums;
                     
        } 
    private:
        void reverse(vector<int>& nums,int i,int j){
            if(i>j){
                return ;
            }
            swap(nums[i],nums[j]);
            return reverse(nums,++i,--j);


        }
};
int main(){
    Solution sol;
    vector<int> nums;
    int n;
    while(cin>>n){
        nums.push_back(n);
    }
    vector<int> ans=sol.reverseArray(nums);
    for(auto i:ans){
        cout<<i<<" ";
    }
}
//*T.C:O(n/2)
//*S.C:O(n/2)