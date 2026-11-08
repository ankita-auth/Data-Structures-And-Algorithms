//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int majorityElement(vector<int>& nums){
//             int n=nums.size();
//             for(int i=0;i<n;i++){
//                 int cnt=0;
//                 for(int j=0;j<n;j++){
//                     if(nums[j]==nums[i]){
//                         cnt++;
//                     }
//                 }

//                 if(cnt>(n/2)){
//                     return nums[i];
//                 }

//             }

//             return -1;
//         }
// };

// int main(){
//     vector<int> vec;
//     int x;
//     while(cin>>x){
//         vec.push_back(x);
//     }
//     Solution s;
//     int n=s.majorityElement(vec);
//     cout<<n;
//     return 0;
// }
//*T.C:O(n^2)
//*S.C:O(1)

//-----------------------X-----------------

//*Better(Hashing)

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int majorityElement(vector<int>& nums){
            int n=nums.size();
            unordered_map<int,int> mp;
            for(int num:nums){
                mp[num]++;
            }

            for(auto& pair:mp){
                if(pair.second>n/2){
                    return pair.first;

                }
            }



            return -1;
        }
};

int main(){
    vector<int> vec;
    int x;
    while(cin>>x){
        vec.push_back(x);
    }
    Solution s;
    int n=s.majorityElement(vec);
    cout<<n;
    return 0;
}
//*T.C:O(n)
//*S.C:O(n)

