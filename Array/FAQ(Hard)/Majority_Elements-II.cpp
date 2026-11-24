/*
Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array. The output can be returned in any order.

Example 1:
Input: nums = [1, 2, 1, 1, 3, 2]

Output: [1]

Explanation:

Here, n / 3 = 6 / 3 = 2.

Therefore the elements appearing 3 or more times is : [1]

Example 2:
Input: nums = [1, 2, 1, 1, 3, 2, 2]

Output: [1, 2]

Explanation:

Here, n / 3 = 7 / 3 = 2.

Therefore the elements appearing 3 or more times is : [1, 2]

*/

//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> majorityElementTwo(vector<int>& nums){
//             int n=nums.size();
//             vector<int> result;
//             for(int i=0;i<n;i++){
//                 if(result.size()==0 || result[0]!=nums[i]){
//                     int cnt=0;
//                     for(int j =0;j<n;j++) {
//                         if(nums[j]==nums[i]){
//                             cnt++;
//                         }
//                     }

//                     if(cnt>(n/3)){
//                         result.push_back(nums[i]);
//                     }

//                 }

//                 if(result.size()==2) break;



//             }

//             return result;

//         }
// };



// int main(){
//     vector<int> nums;
//     int x;
//     while(cin>>x){
//         nums.push_back(x);
//     }
//     Solution s;
//     vector<int> ans=s.majorityElementTwo(nums);
//     for(int i:ans){
//         cout<<i<<" ";
//     }


//     return 0;
// }

//*T.C: O(n^2)
//*S.C: O(1)

//------------------------X---------------------

//*Better

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> majorityElementTwo(vector<int>& nums){
//             int n=nums.size();
//             vector<int> result;
//             unordered_map<int, int> mpp;
//             int mini=int(n/3)+1;
//             for(int i=0;i<n;i++){
//                 mpp[nums[i]]++;
//                 if(mpp[nums[i]]==mini){
//                     result.push_back(nums[i]);
//                 }
//                 if(result.size()==2){
//                     break;
//                 }
//             }

//             return result;

//         }
// };



// int main(){
//     vector<int> nums;
//     int x;
//     while(cin>>x){
//         nums.push_back(x);
//     }
//     Solution s;
//     vector<int> ans=s.majorityElementTwo(nums);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
   


//     return 0;
// }
//*T.C: O(n) [Unorderes Map->O(1)]
//*S.C: O(n) [Because of Map]

//--------------------------X--------------------------

//*Optimal

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> majorityElementTwo(vector<int>& nums){
            int n=nums.size();
            int cnt1=0, cnt2=0;
            int el1=INT_MIN, el2=INT_MIN;

            for(int i=0;i<n;i++){
                if(cnt1==0 && el2!=nums[i]){
                    cnt1=1;
                    el1=nums[i];
                }
                else if(cnt2==0 && el1!=nums[i]){
                    cnt2=1;
                    el2=nums[i];
                }
                else if(nums[i]==el1){
                    cnt1++;
                }
                else if(nums[i]==el2){
                    cnt2++;
                }
                else{
                    cnt1--;
                    cnt2--;
                }
            }

            for(int i=0;i<n;i++){
                if(nums[i]==el1){
                    cnt1++;
                }
                if(nums[i]==el2){
                    cnt2++;
                }
            }

            //Maximum occurence needed to get shortlist
            int mini=n/3 +1;
            vector<int> result;
            if(cnt1>=mini){
                result.push_back(el1);
            }
            if(cnt2>=mini && el1!=el2){
                result.push_back(el2);
            }
            return result;

        }
};



int main(){
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    Solution s;
    vector<int> ans=s.majorityElementTwo(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
   


    return 0;
}

//*T.C: O(n)
//*S.C: O(1)