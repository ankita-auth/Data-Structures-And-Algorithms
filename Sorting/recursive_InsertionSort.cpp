#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:     
        vector<int>insertSort(vector<int>& nums){
            insertionSortHelper(nums,nums.size());
            return nums;

        }

        void insertionSortHelper(vector<int>& nums,int n) {
            if(n<=1){
                return;
            }

            insertionSortHelper(nums,n-1);

            int last=nums[n-1];
            int j=n-2;

            while(j>=0 && nums[j]>last){
                nums[j+1]=nums[j];
                j--;
            }

            nums[j+1]=last;

        }
};

int main(){
    vector<int> vec;
    int x;
    while(cin>>x){
        vec.push_back(x);

    }
    Solution s;
    vector<int> nums=s.insertSort(vec);
    for(int i:nums){
        cout<<i<<" ";
    }


}

//*T.C:O(n^2)
//*S.C:O(n)