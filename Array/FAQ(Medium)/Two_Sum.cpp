/*

*/


//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> twoSum(vector<int>& nums, int target){
//             int n=nums.size();

//             vector<int> ans;
//             for(int i=0;i<n;i++){
//                 for(int j=i+1;j<n;j++){
//                     if(nums[i] + nums[j] == target){
//                         ans.push_back(i);
//                         ans.push_back(j);
//                         return ans;
//                     }
//                 }
//             }

//             return {-1,-1};

            
//         }
// };
// int main(){

//     vector<int> vec;
//     int target;
//     cin>>target;
//     int m;
//     while(cin>>m){
//         vec.push_back(m);
//     }
//     Solution sol;
//     for(auto it:sol.twoSum(vec,target) ){
//         cout<<it<<" ";
//     }
//     return 0;
    

    
// }

//*T.C: O(n^2)
//*S.C:O(n) ->Display, O(1)->Solving
//------------------------X--------------------------

//*Better

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> twoSum(vector<int>& nums, int target){
//             unordered_map<int, int> mpp;
//             int n=nums.size();
//             for(int i=0;i<n;i++){
//                 int num=nums[i];
//                 int moreNeeded=target-num;
//                 if(mpp.find(moreNeeded)!=mpp.end()){
//                     return {mpp[moreNeeded],i};
//                 }

//                 mpp[num]=i;
//             }
//             return {-1,-1};
            
//         }
// };
// int main(){

//     vector<int> vec;
//     int target;
//     cin>>target;
//     int m;
//     while(cin>>m){
//         vec.push_back(m);
//     }
//     Solution sol;
//     for(auto it:sol.twoSum(vec,target) ){
//         cout<<it<<" ";
//     }
//     return 0;
    

    
// }

//*T.C: O(N)
//if ordered map -> worst complexity: O(Nlogn)
//if unordered map worst complexity: O(N^2)
//*S.C: O(N)

//---------------------X------------------------

//*Optimal
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            
            int n=nums.size();
            vector<int> ans;
            vector<vector<int>> eleIndex;
            for(int i=0;i<n;i++){
                eleIndex.push_back({nums[i],i});
            }

            sort(eleIndex.begin(),eleIndex.end(),[](const vector<int>& a, const vector<int>& b){ return a[0]<b[0];
            });

            int left=0;
            int right=n-1;
            while(left<right){

                int sum=eleIndex[left][0] +eleIndex[right][0];
                if(sum==target){
                    ans.push_back(eleIndex[left][1]);
                    ans.push_back(eleIndex[right][1]);
                    return ans;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }


            return {-1,-1};
            
        }
};
int main(){

    vector<int> vec;
    int target;
    cin>>target;
    int m;
    while(cin>>m){
        vec.push_back(m);
    }
    Solution sol;
    for(auto it:sol.twoSum(vec,target) ){
        cout<<it<<" ";
    }
    return 0;
    

    
}
//*T.C:O(N) + O(N*logN)=> loop will run at most N times & sorting the array will take N * logN
//*S.C:O(N)