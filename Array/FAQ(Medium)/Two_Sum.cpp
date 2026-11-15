/*

*/


//*Brute Force
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            int n=nums.size();

            vector<int> ans;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i] + nums[j] == target){
                        ans.push_back(i);
                        ans.push_back(j);
                        return ans;
                    }
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

//*T.C: O(n^2)
//*S.C: O(1)

