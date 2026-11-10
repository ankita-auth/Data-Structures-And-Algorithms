/*
Given an integer array nums, return a list of all the leaders in the array.

//*A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements inthe leader array must appear in the order they appear in the nums array.

Example 1:
Input: nums = [1, 2, 5, 3, 1, 2]

Output: [5, 3, 2]

Explanation:

2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]

Example 2:
Input: nums = [-3, 4, 5, 1, -4, -5]

Output: [5, 1, -4, -5]

Explanation:

-5 is the rightmost element, -4 is the largest element in the index range [4, 5], 1 is the largest element in the index range [3, 5] and 5 is the largest element in the range [2, 5]

*/
//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> leader_array(vector<int>& nums){
//             int n=nums.size();
//             vector<int> ans;
//             for(int i=0;i<n;i++){
//                 bool leader=true;
//                 for(int j=i+1;j<n;j++){
//                     if(nums[j]>=nums[i]){
//                         leader=false;
//                         break;

//                     }

//                 }
//                 if(leader){
//                     ans.push_back(nums[i]);
//                 }
//             }
//             return ans;
//         }
// };
// int main(){
//     vector<int> nums;
//     int x;
//     while(cin >> x){
//         nums.push_back(x);
//     }
//     Solution sol;
//     for(auto it: sol.leader_array(nums)){
//         cout << it << " ";
//     }

//     return 0;

// }
//*T.C: ~O(N^2)
//*S.C: O(N) -> Display, No solving

//---------------------------X-----------------------

//*Optimal

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> leader_array(vector<int>& nums){
            vector<int> ans;
            if(nums.empty()){
                return ans;
            }

            int max=nums[nums.size()-1];
            ans.push_back(nums[nums.size()-1]);

            for(int i=nums.size()-2;i>=0;i--){
                if(nums[i]>max){
                    ans.push_back(nums[i]);
                    max=nums[i];
                }
            }

            reverse(ans.begin(),ans.end());
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
    for(auto it: sol.leader_array(nums)){
        cout << it << " ";
    }

    return 0;

}
//*T.C: O(N)
//*S.C: O(N) -> Display