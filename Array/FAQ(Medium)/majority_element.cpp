/*
Given an integer array nums of size n, return the majority element of the array.

The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

Example 1:
Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]

Output: 7

Explanation:

The number 7 appears 5 times in the 9 sized array

Example 2:
Input: nums = [1, 1, 1, 2, 1, 2]

Output: 1

Explanation:

The number 1 appears 4 times in the 6 sized array
*/

//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int majorityElement(vector<int>& nums){
//             int n=nums.size();
//             for(int i=0;i<n;i++){
//                 int cnt=0;
//                 for(int j=0;j<n;j++){
//                     if(nums[j]==nums[i]){
//                         cnt++;
//                     }
//                 }

//                 if(cnt>(n/2)){
//                     return nums[i];
//                 }

//             }

//             return -1;
//         }
// };

// int main(){
//     vector<int> vec;
//     int x;
//     while(cin>>x){
//         vec.push_back(x);
//     }
//     Solution s;
//     int n=s.majorityElement(vec);
//     cout<<n;
//     return 0;
// }
//*T.C:O(n^2)
//*S.C:O(1)

//-----------------------X-----------------

//*Better(Hashing)

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int majorityElement(vector<int>& nums){
//             int n=nums.size();
//             unordered_map<int,int> mp;
//             for(int num:nums){
//                 mp[num]++;
//             }

//             for(auto& pair:mp){
//                 if(pair.second>n/2){
//                     return pair.first;

//                 }
//             }



//             return -1;
//         }
// };

// int main(){
//     vector<int> vec;
//     int x;
//     while(cin>>x){
//         vec.push_back(x);
//     }
//     Solution s;
//     int n=s.majorityElement(vec);
//     cout<<n;
//     return 0;
// }
//*T.C:O(n)
//*S.C:O(n)

//---------------------------X--------------------------

//*Optimal [Moore's Voting Algorithm]
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int majorityElement(vector<int>& num){
            int n=num.size();
            int cnt=0;
            int el;

            for(int i=0;i<n;i++){
                if(cnt==0){
                    cnt=1;
                    el=num[i];
                }
                else if(el==num[i]){
                    cnt++;
                }
                else{
                    cnt--;
                }
            }

            if(cnt==0){
                return -1;
            }

            int cnt1=0;
            for(int i=0;i<n;i++){
                if(num[i]==el){
                    cnt1++;
                }
            }
            if(cnt1>n/2){
                return el;
            }

            return -1;

        }

};
int main(){
    vector<int> vec;
    int x;
    while(cin>>x){
        vec.push_back(x);
    }
    Solution s;
    int n=s.majorityElement(vec);
    cout<<n;
    return 0;
}
//*T.C: O(N)+O(N)
//*S.C: O(1)
