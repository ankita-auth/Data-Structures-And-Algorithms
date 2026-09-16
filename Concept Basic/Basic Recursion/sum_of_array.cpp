#include <bits/stdc++.h>
using namespace std;
// class Solution{
//     public:
//          int sum=0;
//          int arraySum(vector<int>& nums){
//             if(nums.empty()){
//                 return sum;
//             }
//             sum+=nums.back();
//             nums.pop_back();
//             return arraySum(nums);
            
            
//          }         
// };
// //*OR
// class Solution{
//     public:
//         int arraySum(vector<int>& nums){
//             return sum(nums,0);
//         }
//     private:
//         int sum(vector<int>& nums, int left){
//             if(left>=nums.size()){
//                 return 0;
//             }
//             return nums[left]+sum(nums,left+1);
//         }

// };
//*OR
class Solution{
    public:
        int arraySum(int i,vector<int>& nums, int N){
            if(i>=N){
                return 0;

            }
            return nums[i]+arraySum(i+1,nums,N);
        }
};


int main(){
    Solution sol;
    vector<int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    cout<<sol.arraySum(0,nums,nums.size());
}

//*T.C:O(n)
//*S.C:O(n)