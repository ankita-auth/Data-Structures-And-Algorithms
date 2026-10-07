/*
Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.

Example 1:
Input : nums = [1, 2, 3, 4, 5]

Output : true

Explanation : For all i (1 <= i <= 4) it holds nums[i] <= nums[i+1], hence it is sorted and we return true.

Example 2:
Input : nums = [1, 2, 1, 4, 5]

Output : false

Explanation : For i == 2 it does not hold nums[i] <= nums[i+1], hence it is not sorted and we return false.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isSorted(vector<int>& nums ){
            if(nums.empty()) return true;
            return isSorted(nums,0);

        }
    private:
        bool isSorted(vector<int>& nums, int left){
            if(left==nums.size()-1){
                return true;
            }
            if(nums[left] > nums[left + 1]){
                return false;
            }

            return isSorted(nums,left+1);
        }
};

int main(){
    vector<int> vec;
    int x;
    while(cin >> x){
        vec.emplace_back(x);
    }
    Solution s;
    cout << s.isSorted(vec);


    return 0;
}
//*T.C:O(n)
//*S.C:O(n)
