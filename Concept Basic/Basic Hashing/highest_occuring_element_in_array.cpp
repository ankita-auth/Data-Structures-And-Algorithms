/*
Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.


Example 1:
Input: nums = [1, 2, 2, 3, 3, 3]

Output: 3

Explanation: The number 3 appears the most (3 times). It is the most frequent element.

Example 2:
Input: nums = [4, 4, 5, 5, 6]

Output: 4

Explanation: Both 4 and 5 appear twice, but 4 is smaller. So, 4 is the most frequent element.
*/




//* Brute Force Method
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//          int mostFrequentElement(vector<int> &nums){
//             int n=nums.size();
//             int maxFreq=0;
//             int maxEle;
//             vector<bool> visited(n,false);
//             for(int i=0;i<n;i++){
//                 int freq=0;
//                 if(visited[i]){
//                     continue;
//                 }
//                 for(int j=i;j<n;j++){
//                     if(nums[i]==nums[j]){
//                         freq++;
//                         visited[j]=true;
//                     }
//                 }

//                 if(freq>maxFreq){
//                     maxFreq=freq;
//                     maxEle=nums[i];

//                 }else if(freq==maxFreq){
//                     maxEle=min(maxEle,nums[i]);
//                 }
//             }
//             return maxEle;


//          }

// };

// int main(){
//     Solution s;
//     vector<int> nums= {4, 4, 5, 5, 6};
//     cout<<s.mostFrequentElement(nums);
    

//     return 0;
// }

//*T.C:O(n^2)
//*S.C:O(10^4)

//---------------X------------------

//*Optimal Method

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
// public:
//      int mostFrequentElement(vector<int> &nums){
//         int n=nums.size();
//         int maxFreq=0;
//         int maxEle;
//         unordered_map<int,int> mpp;
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//         }

//         for(auto it:mpp){
//             int ele=it.first;
//             int freq=it.second;

//             if(freq>maxFreq){
//                 maxFreq=freq;
//                 maxEle=ele;
//             }
//             else if(freq==maxFreq){
//                 maxEle=min(maxEle,ele);
//             }
//         }

//         return maxEle;

//      }
  
// };

// int main(){
//     vector<int> nums={4,4,5,5,6};

//     Solution sol;
//     int ans=sol.mostFrequentElement(nums);
//     cout<<ans;
//     return 0;

// }

//*T.C:O(n) [average]
//*S.C:O(n)

//---------------X------------------
//* Using Array
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int mostFrequentElement(int arr[], int n){
            int maxi=0;
            for(int i=0;i<n;i++){
                maxi=max(maxi,arr[i]);

            }
            int vis[maxi+1]={0};
            int maxcnt=0,el=-1;
            for(int i=0;i<n;i++){
                int cnt=0;
                if(vis[arr[i]]==0){
                    vis[arr[i]]=1;
                    for(int j=0;j<n;j++){
                        if(arr[i]==arr[j]){
                            cnt++;
                        }
                    }
                    if(cnt>maxcnt){
                        maxcnt=cnt;
                        el=arr[i];
                    }
                    else if(cnt==maxcnt && arr[i]<el){
                        el=arr[i];
                    }
                }
            }
            return el;

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
    cout<<s.mostFrequentElement(arr,n);
    return 0;
   
}

//*T.C: O(N2)
//*S.C: O(10^4)


//---------------X------------------


// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int mostFrequentElement(int arr[],int n){
//             int maxi = 0;
//             for(int i=0; i<n; i++){
//                 maxi = max(maxi, arr[i]);

//             }
//             int hash[maxi+1] = {0};

//             for(int i =0; i<n; i++){
//                 hash[arr[i]]++;
//             }
//             int maxcnt =0,el=-1;
//             for(int i=0; i<=maxi; i++){
//                 if(hash[i] > maxcnt){
//                     maxcnt = hash[i];
//                     el = i;
//                 }
//             }
//             return el;
           

//         }
// };

// //*Note: In precomputation our index is sorted

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     Solution s;
//     cout << s.mostFrequentElement(arr,n);

//     return 0;
    
// }
// //*T.C: O(N)
// //*S.C: O(maxi)
