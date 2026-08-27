
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
//*S.C:O(n)

//---------------X------------------

//*Optimal Method

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
     int mostFrequentElement(vector<int> &nums){
        int n=nums.size();
        int maxFreq=0;
        int maxEle;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for(auto it:mpp){
            int ele=it.first;
            int freq=it.second;

            if(freq>maxFreq){
                maxFreq=freq;
                maxEle=ele;
            }
            else if(freq==maxFreq){
                maxEle=min(maxEle,ele);
            }
        }

        return maxEle;

     }
  
};

int main(){
    vector<int> nums={4,4,5,5,6};

    Solution sol;
    int ans=sol.mostFrequentElement(nums);
    cout<<ans;
    return 0;

}

//*T.C:O(n) [average]
//*S.C:O(n)