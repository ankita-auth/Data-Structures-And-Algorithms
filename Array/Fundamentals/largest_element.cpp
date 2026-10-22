


//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         static int largestElement(vector<int>& nums){
//             sort(nums.begin(),nums.end());
//             int largest=nums[nums.size()-1];
//             return largest ;
//         }
// };

// int main(){
//     int x;
//     vector<int> nums;
//     while (cin>>x)
//     {
//         nums.push_back(x);
       
//     }
   
//     Solution s;
//     int l=s.largestElement(nums);
//     cout<<l;
//     return 0;

// }

//*T.C->O(nlogn)
//*S.C->O(logn)


//*Optimal
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static int largestElement(vector<int>& nums){
            int largest=nums[0];
            for(int i=1;i<nums.size();i++){
                if(nums[i]>largest){
                    largest=nums[i];
                }
            }
            return largest ;
        }
};

int main(){
    int x;
    vector<int> nums;
    while (cin>>x)
    {
        nums.push_back(x);
       
    }
   
    Solution s;
    int l=s.largestElement(nums);
    cout<<l;
    return 0;

}

//*T.C->O(n)
//*S.C->O(1)