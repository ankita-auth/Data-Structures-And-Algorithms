/*
Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

Example 1:
Input: n=5, arr = [1,2,3,4,5]

Output: [5,4,3,2,1]

Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

Example 2:
Input: n=6, arr = [1,2,1,1,5,1]

Output: [1,5,1,1,2,1]

Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].
*/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void reverse(int arr[],int n){
           
//             for(int i=0;i<n/2;i++){
//                 int t=arr[i];
//                 arr[i]=arr[n-i-1];
//                 arr[n-i-1]=t;


//             }
            
//         }

// };
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Solution s;
//     s.reverse(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

//----------------X----------------
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void reverse(int arr[],int n){
//             int temp[n];
           
//             for(int i=0;i<n;i++){
//                 temp[i]=arr[n-i-1];
//             }
//             for(int i=0;i<n;i++){
//                 arr[i]=temp[i];
//             }
//             for(int i=0;i<n;i++){
//                 cout<<arr[i]<<" ";
//             }
            
//         }

// };
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Solution s;
//     s.reverse(arr,n);
    

// }

//---------------X-----------------
//2 Pointer Approach
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void reverse(int arr[],int n){
            int i=0,j=n-1,temp;
            while(i<j){
                swap(arr[i],arr[j]);
                i++,j--;

            }
            
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
    s.reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

//T.C=O(n)
//S.c=O(1)