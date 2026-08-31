//*Optimised
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
// public:
//      int sumHighestAndLowestFrequency(vector<int> &nums){
//         int n=nums.size();
//         int maxFreq=0;
//         int minFreq=n;
//         unordered_map<int,int> mpp;
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//         }
//         for(auto it:mpp){
//             int freq=it.second;
//             if(freq>maxFreq){
//                 maxFreq=freq;
//             }
//             if(freq<minFreq){
//                 minFreq=freq;
//             }
//         }
//         return maxFreq+minFreq;
//      }
// };

// int main(){
//     vector<int> nums={4,4,5,5,6};

//     Solution sol;
//     int ans=sol.sumHighestAndLowestFrequency(nums);
//     cout<<ans;
//     return 0;

// }

//------------------X------------------

//*Brute Force
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         int  sumHighestAndLowestFrequency(vector<int> &nums){
            int n=nums.size();
            int maxFreq=0;
            int minFreq=n;
            vector<bool> visited(n,false);
            for(int i=0;i<n;i++){
                int freq=0;
                if(visited[i]){
                    continue;
                }
                for(int j=i;j<n;j++){
                    if(nums[i]==nums[j]){
                        freq++;
                        visited[j]=true;
                    }
                }
                maxFreq = max(maxFreq, freq);minFreq = min(minFreq, freq);

            }
            return maxFreq+minFreq;


         }

};

int main(){
    Solution s;
    vector<int> nums= {4, 4, 5, 5, 6};
    cout<<s. sumHighestAndLowestFrequency(nums);
    

    return 0;
}

//----------------X---------------------
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int mostFrequentElement(vector<int> &nums){
            unordered_map<int,int> mpp;
            for(auto it:nums){
                mpp[it]++;
            }
            int maxcnt = 0;

            for(auto it: mpp){
                int ele = it.first;
                int freq = it.second;

                if(freq > maxcnt){
                    maxcnt = freq;
                }

            }
            return maxcnt;

        }
        int minFrequentElement(vector<int> &nums){
            unordered_map<int,int> mpp;
            int n = nums.size();
            for(auto it:nums){
                mpp[it]++;
            }
            int mincnt = n;

            for(auto it: mpp){
                int ele = it.first;
                int freq = it.second;

                if(freq < mincnt){
                    mincnt = freq;
                }

            }
            return mincnt;

        }
        
};

int main(){
    int n,x;
    cin >> n;
    vector <int> nums;
    for(int i=0; i<n; i++){
         cin >> x;
         nums.push_back(x);
    }
    Solution s1;
    int a = s1.mostFrequentElement(nums);
    int b = s1.minFrequentElement(nums);
    cout << a+b;

    return 0;

    
}