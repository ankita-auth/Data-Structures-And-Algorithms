/*
Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.

Return the values A and B, as an array of size 2, where A appears in the 0-th index and B in the 1st index.

Note: You are not allowed to modify the original array.

Example 1:
Input: nums = [3, 5, 4, 1, 1]

Output: [1, 2]

Explanation:

1 appears two times in the array and 2 is missing from nums

Example 2:
Input: nums = [1, 2, 3, 6, 7, 5, 7]

Output: [7, 4]

Explanation:

7 appears two times in the array and 4 is missing from nums.
*/

//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> findMissingRepeatingNumbers(vector<int>& nums){
//             int n= nums.size();
//             int repeating = -1, missing = -1;
//             for(int i=1;i<=n;i++){
//                 int cnt = 0;
//                 for(int j=0;j<n;j++){
//                     if(nums[j]==i)  cnt++;
//                 }

//                 if(cnt==2) repeating = i;
//                 else if(cnt==0) missing= i;

//                 if(repeating!=-1 && missing!=-1){
//                     break;
//                 }
//             }
//             return {repeating, missing};
//         }
// };



// int main(){
//     vector<int> nums;
//     int x;
//     while(cin>>x){
//         nums.push_back(x);
//     }
//     Solution s;
//     vector<int> ans=s.findMissingRepeatingNumbers(nums);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
   


//     return 0;
// }

//*T.C: O(n^2)
//*S.C: O(1)

//--------------------------X----------------------

//*Better

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> findMissingRepeatingNumbers(vector<int>& nums){
//             int n= nums.size();
//             int hash[n+1]={0};
//             for(int i=0;i<n;i++){
//                 hash[nums[i]]++;
//             }

//             int repeating=-1,missing=-1;
//             for(int i=1;i<=n;i++){
//                 if(hash[i]==2){
//                     repeating=i;
//                 }else if(hash[i]==0){
//                     missing=i;
//                 }

//                 if(repeating!=-1 && missing!=-1 ){
//                     break;
//                 }
//             }

//             return {repeating, missing};
//         }
// };



// int main(){
//     vector<int> nums;
//     int x;
//     while(cin>>x){
//         nums.push_back(x);
//     }
//     Solution s;
//     vector<int> ans=s.findMissingRepeatingNumbers(nums);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
   


//     return 0;
// }

//*T.C: O(2*n)
//*S.C: O(n) [Hash Array]

//---------------------------X-------------------------


//*Optimal-I

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> findMissingRepeatingNumbers(vector<int>& nums){
//             long long n=nums.size();
//             long long SN=(n* (n+1))/2;
//             long long S2N=(n* (n+1)*(2*n+1))/6;

//             long long S=0,S2=0;
//             for(int i=0;i<n;i++){
//                 S+=nums[i];
//                 S2+=(long long)nums[i]*(long long)nums[i];
//             }

//             long long val1=S-SN;
//             long long val2=S2-S2N;

//             val2=val2/val1;

//             long long x=(val1+val2)/2;
//             long long y=x-val1;

//             return {(int)x,(int)y};

//         }
// };



// int main(){
//     vector<int> nums;
//     int x;
//     while(cin>>x){
//         nums.push_back(x);
//     }
//     Solution s;
//     vector<int> ans=s.findMissingRepeatingNumbers(nums);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
   


//     return 0;
// }

//*T.C: O(n)
//*S.C: O(1)

//---------------------------X-------------------------

//*Optimal-II

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> findMissingRepeatingNumbers(vector<int>& nums){
            int n=nums.size();
            int xr=0;
            for(int i=0;i<n;i++){
                xr=xr^nums[i];
                xr=xr^(i+1);
            }
            int number=(xr & ~(xr-1));
            int zero=0,one=0;
            for(int i=0;i<n;i++){
                if((nums[i]&number)!=0){
                    one=one^nums[i];
                }
                else{
                    zero=zero^nums[i];
                }
            }
            for(int i=1;i<=n;i++){
                if((i&number)!=0){
                    one=one^i;
                }
                else{
                    zero=zero^i;
                }
            }
            int cnt=0;
            for(int i=0;i<n;i++){
                if(nums[i]==zero){
                    cnt++;
                }
            }
            if(cnt==2){
                return {zero,one};
            }
            return {one,zero};          
        }
};
int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    Solution s;
    vector<int> ans=s.findMissingRepeatingNumbers(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
   


    return 0;
}

//*T.c: O(n)
//*S.C: O(1)

//*Here we will get 2^ value not index(For code)