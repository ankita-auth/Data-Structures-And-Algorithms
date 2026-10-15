#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bubbleSort(vector<int>& nums)
    {
        bubbleSortHelper(nums, nums.size());
        return nums;
    }

    void bubbleSortHelper(vector<int>& nums, int n)
    {
        if (n == 1)
        {
            return;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1]){
                swap(nums[i],nums[i+1]);
            }
        }

        bubbleSortHelper(nums,n-1);
    }
};

int main(){
    vector<int> vec;
    int x;
    while(cin>>x){
        vec.push_back(x);

    }
    Solution s;
    vector<int> nums=s.bubbleSort(vec);
    for(int i:nums){
        cout<<i<<" ";
    }


}

//*T.C:O(n^2)
//*S.C:O(n)