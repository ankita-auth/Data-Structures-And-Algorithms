/*
Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [2, 3, 5, -2, 7, -4]

Output: 15

Explanation:

The subarray from index 0 to index 4 has the largest sum = 15

Example 2:
Input: nums = [-2, -3, -7, -2, -10, -4]

Output: -2

Explanation:

The element on index 0 or index 3 make up the largest sum when taken as a subarray
*/

//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int maxSubArray(vector<int>& nums){
//             int maxi=INT_MIN;
//             for(int i=0;i<nums.size();i++){
//                 for(int j=i;j<nums.size();j++){
//                     int sum=0;
//                     for(int k=i;k<=j;k++){
//                         sum+=nums[k];
//                         maxi=max(maxi,sum);
//                     }

                    
//                 }
//             }

//             return maxi;
//         }
// };

// int main(){
//     vector<int> nums;
//     int x;
//     while(cin >> x){
//         nums.push_back(x);
//     }
//     Solution sol;
//     cout << sol.maxSubArray(nums);

//     return 0;
// }

//*T.C: O(n^3)
//*S.C: O(1)

//--------------------------------X------------------------------


//*Better
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int maxSubArray(vector<int>& nums){
//             int maxi=INT_MIN;
//             for(int i=0;i<nums.size();i++){
//                 int sum=0;
//                 for(int j=i;j<nums.size();j++){
//                     sum+=nums[j];
//                     maxi=max(maxi,sum);
//                 }
//             }
//             return maxi;
//         }
// };
// int main(){
//     vector<int> nums;
//     int x;
//     while(cin >> x){
//         nums.push_back(x);
//     }
//     Solution sol;
//     cout << sol.maxSubArray(nums);

//     return 0;
// }

//*T.C: O(n^2)
//*S.C: O(1)

//------------------------X----------------------------------

//*Optimal=>[Kadane's Algorithm]
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int maxSubArray(vector<int>& nums){
//             long long maxi=LLONG_MIN;
//             long long sum=0;
//             for(int i=0;i<nums.size();i++){
//                 sum+=nums[i];
//                 if(sum>maxi){
//                     maxi=sum;
//                 }
//                 if(sum<0){
//                     sum=0;
//                 }
                
//             }
//             return maxi;
//         }
// };
// int main(){
//     vector<int> nums;
//     int x;
//     while(cin >> x){
//         nums.push_back(x);
//     }
//     Solution sol;
//     cout << sol.maxSubArray(nums);

//     return 0;
// }

//*T.C: O(n)
//*S.C: O(1)

//-----------------------X-------------------------------------
//*Follow Up=>[Kadane's Algorithm]->(Print The SubArray)
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxSubArray(vector<int>& nums){
            long long maxi=LLONG_MIN;
            long long sum=0;
            int start=0, ansStart=-1, ansEnd=-1;
            for(int i=0;i<nums.size();i++){
                if(sum==0){
                    start=i;
                }
                sum+=nums[i];
                if(sum>maxi){
                    maxi=sum;
                    ansStart=start;
                    ansEnd=i;
                }
                if(sum<0){
                    sum=0;
                }
                
            }
            cout<<"The Subarray is: [";
            for(int i=ansStart;i<=ansEnd;i++){
                cout<<nums[i]<<" ";
            }
            cout<<"]"<<endl;
            return maxi;
        }
};
int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    Solution sol;
    cout<<sol.maxSubArray(nums);
    return 0;
}
//*T.C: O(n)
//*S.C: O(1)