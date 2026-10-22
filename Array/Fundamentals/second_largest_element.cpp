
//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int secondLargestElement(vector<int>& nums){
//             int n=nums.size();
//             if(n<2){
//                 return -1;
//             }

//             sort(nums.begin(),nums.end());

//             int largest=nums.back();
//             int secondLargest=-1;
//             for(int i =n-2;i>=0;i--){
//                 if(nums[i]!=largest){
//                     secondLargest=nums[i];
//                     break;
//                 }
//             }

//             return secondLargest;
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
//     int sl=s.secondLargestElement(nums);
//     cout<<sl;
//     return 0;

// }

//*Better
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int secondLargestElement(vector<int>& nums){

            int n=nums.size();
            if(n<2){
                 return -1;
             }
            int largest=INT_MIN,secondLargest=INT_MIN;

            for(int i =0;i<n;i++){
                largest=max(nums[i],largest);
                    
                
            }

            for(int i =0;i<n;i++){
                if(nums[i]>secondLargest && largest!=nums[i]){
                        secondLargest=nums[i];
                    
                }
            }


            return secondLargest == INT_MIN ? -1 : secondLargest;
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
    int sl=s.secondLargestElement(nums);
    cout<<sl;
    return 0;

}
