#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
      int sumOfFirstAndLast(vector<int>& nums){
        if(nums.empty()){
            return 0;
        }
        int sum=nums[0]+nums[nums.size()-1];
        return sum;
      }

};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<s.sumOfFirstAndLast(array);

    return 0;
}