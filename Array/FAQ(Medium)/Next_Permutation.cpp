/*
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr:

[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1].

The next permutation of an array of integers is the next lexicographically greater permutation of its integers.

More formally, if all the permutations of the array are sorted in lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted order.

If such arrangement is not possible (i.e., the array is the last permutation), then rearrange it to the lowest possible order (i.e., sorted in ascending order).

You must rearrange the numbers in-place and use only constant extra memory.

Example 1:
Input: nums = [1,2,3]

Output: [1,3,2]

Explanation:

The next permutation of [1,2,3] is [1,3,2].

Example 2:
Input: nums = [3,2,1]

Output: [1,2,3]

Explanation:

[3,2,1] is the last permutation. So we return the first: [1,2,3].
*/
//*Brute Force
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void nextPermutation(vector<int>& nums){
            vector<vector<int>> ans=getAllPermutation(nums);

            int index=-1;

            for(int i=0;i<ans.size();i++){
                if(nums==ans[i]){
                    index=i;
                    break;
                }
            }

            if(index==ans.size()-1) nums=ans[0];
            else{
                nums=ans[index+1];
            }

            return;
            
        }
    
    private:
        vector<vector<int>> getAllPermutation(vector<int> &nums){
            vector<vector<int>> ans;

            helperFunc(0,nums,ans);

            return ans;
        }

        void helperFunc(int ind, vector<int> &nums, vector<vector<int>> &ans){
            if(ind==nums.size()){
                ans.push_back(nums);
                return;
            }

            for(int i=ind;i<nums.size();i++){
                swap(nums[ind],nums[i]);
                helperFunc(ind+1,nums,ans);
                swap(nums[ind],nums[i]);
            }

            return;

        }
};
int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    Solution sol;
    sol.nextPermutation(nums);
    for(int x : nums) cout << x << " ";
    return 0;
}
//*T.C: O(n)
//*S.C: O(1)