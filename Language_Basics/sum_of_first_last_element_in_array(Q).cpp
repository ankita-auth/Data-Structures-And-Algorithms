/*
Problem: Sum of the First and Last Element of an Array
 
Problem Statement:
Given an integer array nums, return the sum of the first and the last element of the array.
 
Input:
- An integer array nums.
 
Output:
- Return the sum of the first and last element of the array.
 
Examples:
 
Example 1:
Input:
nums = [2, 3, 4, 5, 6]
 
Output:
8
 
Explanation:
First element = 2
Last element = 6
Sum = 2 + 6 = 8
 
Example 2:
Input:
nums = [2]
 
Output:
4
 
Explanation:
Since the array contains only one element, it is both the first and the last element.
Sum = 2 + 2 = 4
 
Example 3:
Input:
nums = [-1, 2, 4, 1]
 
Output:
0
 
Explanation:
First element = -1
Last element = 1
Sum = -1 + 1 = 0
 
Constraints:
1 <= nums.length <= 100
-100 <= nums[i] <= 100
*/
 
 
 
 
 
 
//---------------------------x------------------------
 
 
 

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
      int sumOfFirstAndLast(vector<int>& nums){
        if(nums.empty()){
            return 0;
        }
        int sum=nums[0]+nums[nums.size()-1];
        return sum;
      }

};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<s.sumOfFirstAndLast(array);

    return 0;
}