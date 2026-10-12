#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        vector<int> insertion_sort(vector<int>& nums){
            int n=nums.size();
            for(int i=1;i<n;i++){
                int j=i;
                while(j>0 && nums[j-1]>nums[j]){
                    swap(nums[j-1],nums[j]);
                    j--;


                }
            } 
            return nums;

        }


};

int main(){
    vector<int> vec;
    int x;
    while(cin>>x){
        vec.push_back(x);

    }
    Solution s;
    vector<int> nums=s.insertion_sort(vec);
    for(int i:nums){
        cout<<i<<" ";
    }


}

//*T.C: O(N^2)
//*S.C: O(1) because Insertion Sort is an in-place sorting algorithm, meaning it sorts the array by modifying the original array without using additional data structures that grow with the size of the input.