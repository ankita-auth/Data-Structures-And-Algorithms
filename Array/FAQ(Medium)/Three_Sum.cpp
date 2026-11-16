/*
3 Sum

Given an integer array nums. Return all triplets such that:

i != j, i != k, and j != k
nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets. One element can be a part of multiple triplets. The output and the triplets can be returned in any order.

Example 1:
Input: nums = [2, -2, 0, 3, -3, 5]

Output: [[-2, 0, 2], [-3, -2, 5], [-3, 0, 3]]

Explanation:

nums[1] + nums[2] + nums[0] = 0

nums[4] + nums[1] + nums[5] = 0

nums[4] + nums[2] + nums[3] = 0

Example 2:
Input: nums = [2, -1, -1, 3, -1]

Output: [[-1, -1, 2]]

Explanation:

nums[1] + nums[2] + nums[0] = 0

Note that we have used two -1s as they are separate elements with different indexes

But we have not used the -1 at index 4 as that would create a duplicate triplet


Constraints:
1 <= nums.length <= 3000
-104 <= nums[i] <= 104
*/

//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         vector<vector<int>> threeSum(vector<int>& nums){
//             set<vector<int>> tripletSet;
//             int n=nums.size();
//             for(int i=0;i<n-2;i++){
//                 for(int j=i+1;j<n-1;j++){
//                     for(int k=j+1;k<n;k++){
//                         if(nums[i]+nums[j]+nums[k]==0){
//                             vector<int> temp={nums[i],nums[j],nums[k]};
                            
//                             sort(temp.begin(),temp.end());
//                             tripletSet.insert(temp);
//                         }
//                     }


//                 }
//             }
//             vector<vector<int>> ans(tripletSet.begin(),tripletSet.end());

//             return ans;
//         }
// };

// int main(){
//     vector<int> vec;
//     int x;
//     while(cin>>x){
//         vec.push_back(x);
//     }

//     Solution s;
//     vector<vector<int>> ans=s.threeSum(vec);

//     for(auto& triplet:ans){
//         cout<<"[";
//         for(auto& num:triplet){
//             cout<<num<<" ";
//         }
//         cout<<"] ";
//     }
//     cout<<"\n";

//     return 0;
// }
//*T.C:O(n^3* log(no. of unique triplets))+O(log(3))=>log(no. of unique triplets) is for set insertion 
//*S.C:O(2 x no. of the unique triplets) for using a set data structure and a list to store the triplets.

//---------------------------X--------------------------------

//*Better
// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         vector<vector<int>> threeSum(vector<int>& nums){
//             set<vector<int>> tripletSet;
//             int n=nums.size();
//             for(int i=0;i<n;i++){
//                 set<int> hashset;
//                 for(int j=i+1;j<n;j++){
//                     int third=-(nums[i]+nums[j]);
//                     if(hashset.find(third)!=hashset.end()){
//                         vector<int> temp={nums[i],nums[j],third};

//                         sort(temp.begin(),temp.end());
//                         tripletSet.insert(temp);
//                     }

//                     hashset.insert(nums[j]);


//                 }
//             }
//             vector<vector<int>> ans(tripletSet.begin(),tripletSet.end());

//             return ans;
//         }
// };

// int main(){
//     vector<int> vec;
//     int x;
//     while(cin>>x){
//         vec.push_back(x);
//     }

//     Solution s;
//     vector<vector<int>> ans=s.threeSum(vec);

//     for(auto& triplet:ans){
//         cout<<"[";
//         for(auto& num:triplet){
//             cout<<num<<" ";
//         }
//         cout<<"] ";
//     }
//     cout<<"\n";

//     return 0;
// }
//*T.C:O(n^2* log(no. of unique triplets))+O(log(3))=>log(no. of unique triplets) is for set insertion 
//*S.C:O(2 x no. of the unique triplets) +O(n) for using a set data structure and a list to store the triplets and extra O(N) for storing the array elements in another set.

//---------------------------X--------------------------------
