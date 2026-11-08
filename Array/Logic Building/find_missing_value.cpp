/*
Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

Example 1:
Input: nums = [0, 2, 3, 1, 4]

Output: 5

Explanation:

nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]

Example 2:
Input: nums = [0, 1, 2, 4, 5, 6]

Output: 3

Explanation:

nums contains 0, 1, 2, 4, 5, 6 thus leaving 3 as the only missing number in the range [0, 6]
*/
//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int missingNumber(vector<int>& nums){
            
//             int n=nums.size();
//             for(int i=0;i<=n;i++){
//                 int flag=0;
                
//                 for(int j=0;j<n;j++){
//                     if(nums[j]==i){
//                         flag=1;
//                         break;
//                     }
//                 }
//                 if(flag==0) return i;
//             }
            

          

            
//         }
// };
// int main(){

//     vector<int> vec;
//     int x;

//     while(cin >> x){
//         vec.push_back(x);
//     }

//     Solution sol;
//     cout<<sol.missingNumber(vec);

   

//     return 0;

// }

//*T.C->O(n^2)
//*S.C->O(1)

//--------------------------------X------------------------

//*Better Approach (Hash)
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int missingNumber(vector<int>& nums){
//             int n=nums.size();
//             int freq[n+1]={0};
//             for(int num:nums){
//                 freq[num]++;
//             }
            
//             for(int i=0;i<=n;i++){
//                 if(freq[i]==0){
//                     return i;
//                 }
//             }

//            return -1;

            
//         }
// };
// int main(){

//     vector<int> vec;
//     int x;

//     while(cin >> x){
//         vec.push_back(x);
//     }

//     Solution sol;
//     cout<<sol.missingNumber(vec);

   

//     return 0;

// }

//*T.C->O(2n)
//*S.C->O(n)

//--------------------------X-------------------------------

//*Optimal-I

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int missingNumber(vector<int>& nums){
            
//             int n=nums.size();
//             int s=n*(n+1)/2;
//             int sum=accumulate(nums.begin(),nums.end(),0);

            

//             return s-sum;

            
//         }
// };
// int main(){

//     vector<int> vec;
//     int x;

//     while(cin >> x){
//         vec.push_back(x);
//     }

//     Solution sol;
//     cout<<sol.missingNumber(vec);

   

//     return 0;

// }

//*T.C->O(n)
//*S.C->O(1)

//-----------------------------X--------------------------

//*Optimal-II
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int missingNumber(vector<int>& nums){
            int xor1=0,xor2=0;

            for(int i=0;i<nums.size();i++){
                xor1=xor1^(i+1);
                xor2=xor2^nums[i];
            }
            return (xor1^xor2);

            
        }
};
int main(){

    vector<int> vec;
    int x;

    while(cin >> x){
        vec.push_back(x);
    }

    Solution sol;
    cout<<sol.missingNumber(vec);

   

    return 0;

}

//*T.C->O(n)
//*S.C->O(1)