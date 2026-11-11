/*
Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Example 1:
Input : nums = [2, 4, 5, -1, -3, -4]

Output : [2, -1, 4, -3, 5, -4]

Explanation:

The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions

Example 2:
Input : nums = [1, -1, -3, -4, 2, 3]

Output : [1, -1, 2, -3, 3, -4]

Explanation:

The positive number 1, 2, 3 maintain their relative positions and -1, -3, -4 maintain their relative positions
*/

//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         vector<int> rearrangeArray(vector<int>& nums){
//             int n=nums.size();
//             vector<int> pos,neg;
//             for(int i=0;i<n;i++){
//                 if(nums[i]>=0){
//                     pos.push_back(nums[i]);
//                 }
//                 else{
//                     pos.push_back(nums[i]);
//                 }
//             }

//             for(int i=0;i<n/2;i++){
//                 nums[2*i]=pos[i];
//                 nums[2*i+1]=neg[i];
//             }

//             return nums;
//         }
        
// };
// int main(){
//     vector<int> nums;
//     int x;
//     while(cin >> x){
//         nums.push_back(x);
//     }

//     Solution sol;
//     for(auto it: sol.rearrangeArray(nums)){
//         cout << it << " ";
//     }

//     return 0;
// }

//*T.C:O(n)+O(n/2)
//*S.C:O(n/2 + n/2)=O(n)


//----------------------------X---------------------------


//*Optimal
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> rearrangeArray(vector<int>& nums){
            int n=nums.size();
            vector<int> ans(n,0);
            int pos=0,neg=1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<0){
                    ans[neg]=nums[i];
                    neg+=2;
                }
                else{
                    ans[pos]=nums[i];
                    pos+=2;
                }

            }
            return ans;

        }
};
int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }

    Solution sol;
    for(auto it: sol.rearrangeArray(nums)){
        cout << it << " ";
    }

    return 0;
}

//*T.C:O(n)
//*S.C:O(n)
