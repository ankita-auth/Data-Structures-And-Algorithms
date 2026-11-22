/*
Given an integer array nums and an integer target. Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

a, b, c, d are all distinct valid indices of nums.
nums[a] + nums[b] + nums[c] + nums[d] == target.
Notice that the solution set must not contain duplicate quadruplets. One element can be a part of multiple quadruplets. The output and the quadruplets can be returned in any order.

Example 1:
Input: nums = [1, -2, 3, 5, 7, 9], target = 7

Output: [[-2, 1, 3, 5]]

Explanation:

nums[1] + nums[0] + nums[2] + nums[3] = 7

Example 2:
Input: nums = [7, -7, 1, 2, 14, 3], target = 9

Output: []

Explanation:

No quadruplets are present which add upto 9
*/

//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     vector<vector<int>> fourSum(vector<int> &nums, int target)
//     {
//         int n = nums.size();
//         set<vector<int>> st;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 for (int k = j + 1; k < n; k++)
//                 {
//                     for (int l = k + 1; l < n; l++)
//                     {
//                         long long sum = nums[i] + nums[j] + nums[k] + nums[l];

//                         if (sum == target)
//                         {
//                             vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};

//                             sort(temp.begin(), temp.end());
//                             st.insert(temp);
//                         }
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> ans(st.begin(), st.end());
//         return ans;
//     }

// };

// int main()
// {
//     vector<int> nums;
//     int target;
//     cin >> target;
//     int x;
//     while (cin >> x)
//     {
//         nums.push_back(x);
//     }
//     Solution s;
//     vector<vector<int>> ans = s.fourSum(nums,target);
//     for(auto c: ans){
//         for(auto x: c){
//             cout<<x<<" ";
//         }
//         cout<<"\n";
//     }

// }

//*T.C: O(n^4)
//*S.C: O(2 x no. of the quadruplets) 

//-------------------------------X-----------------------------------

//*Better

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     vector<vector<int>> fourSum(vector<int> &nums, int target)
//     {
//         int n = nums.size();
//         set<vector<int>> st;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 set<long long> hashnet;
//                 for (int k = j + 1; k < n; k++)
//                 {
//                     long long sum=nums[i]+nums[j];
//                     sum+=nums[k];
//                     long long fourth=target - sum;

//                     if (hashnet.find(fourth)!=hashnet.end()){
//                         vector<int> temp={nums[i],nums[j],nums[k],fourth};
//                         sort(temp.begin(),temp.end());
//                         st.insert(temp);
//                     }

//                     hashnet.insert(nums[k]);
                   

//                 }
//             }
//         }
//         vector<vector<int>> ans(st.begin(), st.end());
//         return ans;
//     }

// };

// int main()
// {
//     vector<int> nums;
//     int target;
//     cin >> target;
//     int x;
//     while (cin >> x)
//     {
//         nums.push_back(x);
//     }
//     Solution s;
//     vector<vector<int>> ans = s.fourSum(nums,target);
//     for(auto c: ans){
//         for(auto x: c){
//             cout<<x<<" ";
//         }
//         cout<<"\n";
//     }

// }

//*T.C: O(n^3 * log(M))->log(M) for set insertion
//*S.C:O(2 x no. of the quadruplets) + O(N)

//-------------------------------X-----------------------------------

//*Optimal

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        int n = nums.size();
     
        sort(nums.begin(),nums.end());

        for (int i = 0; i < n; i++)
        {
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for (int j = i + 1; j < n; j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }

                int k=j+1;
                int l=n-1;
                while( k<l ){
                    long long sum=nums[i]+nums[j]+nums[k]+nums[l];

                    if(sum==target){
                        vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;

                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
       
        return ans;
    }

};

int main()
{
    vector<int> nums;
    int target;
    cin >> target;
    int x;
    while (cin >> x)
    {
        nums.push_back(x);
    }
    Solution s;
    vector<vector<int>> ans = s.fourSum(nums,target);
    for(auto c: ans){
        cout<<"[";
        for(auto x: c){
            cout<<x<<" ";
        }
      
        cout<<"]";
          cout<<"\n";
    }
    

}

//*T.C: O(n^3)
//*S.C: O(n)->Display, O(1)->Solving