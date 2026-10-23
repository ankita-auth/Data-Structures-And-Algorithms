/*
Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

Example 1:
Input: nums = [8, 8, 7, 6, 5]

Output: 7

Explanation:

The largest value in nums is 8, the second largest is 7

Example 2:
Input: nums = [10, 10, 10, 10, 10]

Output: -1

Explanation:

The only value in nums is 10, so there is no second largest value, thus -1 is returned
*/


//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int secondLargestElement(vector<int>& nums){
//             int n=nums.size();
//             if(n<2){
//                 return -1;
//             }

//             sort(nums.begin(),nums.end());

//             int largest=nums.back();
//             int secondLargest=-1;
//             for(int i =n-2;i>=0;i--){
//                 if(nums[i]!=largest){
//                     secondLargest=nums[i];
//                     break;
//                 }
//             }

//             return secondLargest;
//         }
// };

// int main(){
//     int x;
//     vector<int> nums;
//     while (cin>>x)
//     {
//         nums.push_back(x);
       
//     }
   
//     Solution s;
//     int sl=s.secondLargestElement(nums);
//     cout<<sl;
//     return 0;

// }

//*T.C->O(nlogn)
//*S.C->O(logn)

//----------------------------------X--------------------

//*Better
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int secondLargestElement(vector<int>& nums){

//             int n=nums.size();
//             if(n<2){
//                  return -1;
//              }
//             int largest=INT_MIN,secondLargest=INT_MIN;

//             for(int i =0;i<n;i++){
//                 largest=max(nums[i],largest);
                    
                
//             }

//             for(int i =0;i<n;i++){
//                 if(nums[i]>secondLargest && largest!=nums[i]){
//                         secondLargest=nums[i];
                    
//                 }
//             }


//             return secondLargest == INT_MIN ? -1 : secondLargest;
//         }
// };

// int main(){
//     int x;
//     vector<int> nums;
//     while (cin>>x)
//     {
//         nums.push_back(x);
       
//     }
   
//     Solution s;
//     int sl=s.secondLargestElement(nums);
//     cout<<sl;
//     return 0;

// }

//*T.C->O(2n)=O(n)
//*S.C->O(1)

//----------------------------X------------------------

//*Optimal
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int secondLargestElement(vector<int>& nums){

            int n=nums.size();
            if(n<2){
                 return -1;
             }
            int largest=nums[0],secondLargest=-1;

            for(int i =1;i<n;i++){
                
                 if(nums[i]>largest ){
                        secondLargest=largest;
                        largest=nums[i];
                 }
                 else if(nums[i]>secondLargest && nums[i]!=largest){
                    secondLargest=nums[i];
                 }
    
            }


            return secondLargest == INT_MIN ? -1 : secondLargest;
        }
};

int main(){
    int x;
    vector<int> nums;
    while (cin>>x)
    {
        nums.push_back(x);
       
    }
   
    Solution s;
    int sl=s.secondLargestElement(nums);
    cout<<sl;
    return 0;

}

//*T.C->O(n)
//*S.C->O(1)