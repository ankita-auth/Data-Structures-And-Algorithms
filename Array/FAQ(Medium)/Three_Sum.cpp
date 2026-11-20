/*
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
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &nums)
//     {
//         set<vector<int>> tripleSet;

//         int n = nums.size();
//         for (int i = 0; i < n - 2; i++)
//         {
//             for (int j = i + 1; j < n - 1; j++)
//             {
//                 for (int k = j + 1; k < n; k++)
//                 {
//                     if (nums[i] + nums[j] + nums[k] == 0)
//                     {
//                         vector<int> temp = {nums[i], nums[j], nums[k]};

//                         sort(temp.begin(), temp.end());

//                         tripleSet.insert(temp);
//                     }
//                 }
//             }
//         }

//         vector<vector<int>> ans(tripleSet.begin(), tripleSet.end());

//         return ans;
//     }
// };
//*T.C: Time Complexity: O(N3 x log(no. of unique triplets)) [log => because of set]
// where N is size of the array. Using 3 nested loops & inserting triplets into the set takes O(log(no. of unique triplets)) time complexity. But we are not considering the time complexity of sorting as we are just sorting 3 elements every time.

//*S.C:  O(2 x no. of the unique triplets)
// temp is not counted as its scope is only limited inside loop

//*Better
// class Solution{
//     public:
//         vector<vector<int>> threeSum(vector<int>& nums){
//             set<vector<int>> tripleSet;

//             int n = nums.size();

//             for(int i=0; i<n; i++){
//                 set<int> hashSet;
//                 for(int j=i+1; j<n; j++){
//                     int third = -(nums[i] + nums[j]);

//                     if(hashSet.find(third) != hashSet.end()){
//                         vector<int> temp = {nums[i], nums[j], third};
//                         sort(temp.begin(),temp.end());
//                         tripleSet.insert(temp);
//                     }

//                     hashSet.insert(nums[j]);
//                 }

//             }

//             vector<vector<int>> ans(tripleSet.begin(),tripleSet.end());
//             return ans;


//         }
// };
//*T.C: O(N2 x log(no. of unique triplets))
// Inserting triplets into the set takes O(log(no. of unique triplets)) time complexity.

//*S.C: O(2 x no. of the unique triplets) + O(N)
//O(N) for hashSet, temp is not considered as it is fixed for 3

//*Optimal
class Solution{
    public:
        vector<vector<int>> threeSum(vector<int>& nums){

            vector<vector<int>> ans;
            int n=nums.size();
            sort(nums.begin(),nums.end());

            for(int i=0;i<n;i++){
                if(i>0 && nums[i-1]==nums[i]){
                    continue;
                }

                int j=i+1;
                int k=n-1;

                while(j<k){
                    int sum=nums[i]+nums[j]+nums[k];

                    if(sum<0){
                        j++;
                    }
                    else if(sum>0){
                        k--;
                    }
                    else{
                        vector<int> temp={nums[i],nums[j],nums[k]};
                        ans.push_back(temp);

                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1]) j++;
                        while(j<k && nums[k]==nums[k+1]) k--;

                    }
                }
            }

            return ans;

            


        }
};
//*T.C:O(nlogn)+O(n^2)
//*S.C:O(1) [But O(n) for display]

int main()
{
    vector<int> nums;
    int x;
    while (cin >> x)
    {
        nums.push_back(x);
    }
    Solution sol;
    vector<vector<int>> ans = sol.threeSum(nums);

    for (auto &triplet : ans)
    {
        cout << "[";
        for (auto &num : triplet)
        {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << endl;

    return 0;
}