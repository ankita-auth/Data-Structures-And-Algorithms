/*
Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.

This must be done in place, without making a copy of the array.

Example 1:
Input: nums = [0, 1, 4, 0, 5, 2]

Output: [1, 4, 5, 2, 0, 0]

Explanation:

Both the zeroes are moved to the end and the order of the other elements stay the same

Example 2:
Input: nums = [0, 0, 0, 1, 3, -2]

Output: [1, 3, -2, 0, 0, 0]

Explanation:

All 3 zeroes are moved to the end and the order of the other elements stay the same
*/


#include <bits/stdc++.h>
using namespace std;

// //* Brute
// class Solution{
//     public:
//         void moveZeroes(vector<int>& nums){
//             int n=nums.size();
//             vector<int> temp;
//             for(int i=0;i<n;i++){
//                 if(nums[i]!=0){
//                     temp.push_back(nums[i]);
//                 }
//             }
//             int nz=temp.size();

//             for(int i=0;i<nz;i++){
//                 nums[i]=temp[i];
//             }

//             for(int i=nz;i<n;i++){
//                 nums[i]=0;
//             }
//         }
// };

//*T.C: O(n) + O(x) + O(n-x) = O(2n)
//*S.C: O(x)  -> O(n) [worst]



//*Optimal[2-pointer approach]
class Solution{
    public:
        void moveZeroes(vector<int>& nums){
            int j=-1;

            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    j=i;
                    break;
                }
            }

            if(j== -1) return ;

            for(int i=j+1;i<nums.size();i++){
                if(nums[i]!=0){
                    swap(nums[j],nums[i]);
                    j++;
                }
            }
        }
};

//* T.C: O(x) + O(n-x) = O(n)
//* S.C: O(1)


int main(){

    vector<int> vec;
    int x;

    while(cin >> x){
        vec.push_back(x);
    }

    Solution sol;
    sol.moveZeroes(vec);

    for(auto it: vec){
        cout << it << " ";
    }

    return 0;

}


