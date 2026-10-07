/*
Given an array arr of size n, the task is to find the sum of all the elements in the array.
 
Example 1:
Input: n=5, arr = [1,2,3,4,5]
 
Output: 15
 
Explanation: Sum of all the elements is 1+2+3+4+5 = 15
 
Example 2:
Input: n=6, arr = [1,2,1,1,5,1]
 
Output: 11
 
Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11
*/
 

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int sum(int arr[],int n){
            int s=0;
            for(int i=0;i<n;i++){
                s+=arr[i];
            }
            return s;
        }

};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<s.sum(arr,n);

}