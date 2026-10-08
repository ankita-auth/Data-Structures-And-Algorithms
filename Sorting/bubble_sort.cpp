#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
            vector<int> bubbleSort(vector<int>& nums){
                int n=nums.size();
                for(int i=n-1;i>=0;i--){
                    bool didSwap=false;
                    for(int j=0;j<=i-1;j++){
                        if(nums[j]>nums[j+1]){
                            swap(nums[j],nums[j+1]);
                            didSwap=true;
                        }

                    }
                    if(!didSwap){
                        break;
                    }
                }
                return nums;
            }
};

int main(){
    vector<int> arr={7,5,9,2,8};
    cout<<"Original Array:";
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
    Solution s;
    vector<int> sortedArr=s.bubbleSort(arr);
    cout<<"Sorted Array:";
    for(int num:sortedArr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}

//*T.C:O(n^2)
//*S.C:O(1)