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