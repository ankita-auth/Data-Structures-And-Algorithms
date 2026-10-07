/*
Given an array of n integers, find the second most frequent element in it.

If there are multiple elements that appear second most frequent times, find the smallest of them.

If second most frequent element does not exist return -1.

Example 1:
Input: arr = [1, 2, 2, 3, 3, 3]

Output: 2

Explanation:

The number 2 appears the second most (2 times) and number 3 appears the most(3 times). 

Example 2:
Input: arr = [4, 4, 5, 5, 6, 7]

Output: 6

Explanation:

Both 6 and 7 appear second most times, but 6 is smaller.
*/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int secondMostFrequentElement(vector<int> &nums){
//             int n = nums.size();
//             unordered_map<int,int> mpp;
//             int maxcnt = 0,secondcnt = 0, el1 = -1, el2=-1;
//             for(int i=0; i<n; i++){
//                 mpp[nums[i]]++;

//             }
//             for(auto it: mpp){
//                 int element = it.first;
//                 int freq = it.second;
//                 if(freq > maxcnt){
//                     el2 = el1;
//                     secondcnt = maxcnt;
//                     maxcnt = freq;
//                     el1 = element;
//                 }
//                 else if(freq == maxcnt){
                   
//                     el1 = min(element,el1);
//                 }
//                 else if(freq > secondcnt){
//                     secondcnt = freq;
//                     el2 = element;

//                 }
//                 else if(freq == secondcnt){
//                     el2 = min(element,el2);
//                 }
                

//             }
//             return el2;

//         }
// };

// int main(){
//     int n,x;
//     cin >> n;
//     vector <int> nums;
//     for(int i=0; i<n; i++){
//          cin >> x;
//          nums.push_back(x);
//     }
//     Solution s;
//     cout<< s.secondMostFrequentElement(nums);

//     return 0;

    
// }

//*T.C: O(N)
//*S.C: O(N)


//--------------x-----------------

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int secondMostFRequentElement(vector<int> &nums){
            int n=nums.size();
            int maxFreq=0;
            int secMaxFreq=0;
            int maxEle=-1,secEle=-1;
            vector<bool> visited(n,false);
            for(int i=0;i<n;i++){
                if(visited[i]) continue;

                int freq=0;
                for(int j=i;j<n;j++){
                    if(nums[i]==nums[j]){
                        freq++;
                        visited[j]=true;
                    }
                }
                if(freq>maxFreq){
                    secMaxFreq=maxFreq;
                    maxFreq=freq;
                    secEle=maxEle;
                    maxEle=nums[i];
                }
                else if(freq==maxFreq){
                    maxEle=min(maxEle,nums[i]);
                }
                else if(freq>secMaxFreq){
                    secMaxFreq=freq;
                    secEle=nums[i];
                }
                else if(freq==secMaxFreq){
                    secEle=min(secEle,nums[i]);
                }
            }
            return secEle;

        }
};

int main(){
    vector<int> nums={4,4,5,5,6,7};
    Solution sol;
    int ans=sol.secondMostFRequentElement(nums);
    cout<<ans;
    return 0;
}

