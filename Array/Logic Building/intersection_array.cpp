/*
Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. Each element in the result must appear as many times as it appears in both arrays; that is, if an element appears x times in nums1 and y times in nums2, it should appear min(x, y) times in the result.

The intersection of two arrays is an array where all values are present in both arrays. Since both input arrays are sorted, the resulting intersection array should also be in sorted order.

Example 1:
Input: nums1 = [1, 2, 2, 3, 5], nums2 = [1, 2, 7]

Output: [1, 2]

Explanation:

The elements 1, 2 are the only elements present in both nums1 and nums2

Example 2:
Input: nums1 = [1, 2, 2, 3, 3, 3], nums2 = [2, 3, 3, 4, 5, 7]

Output: [2, 3, 3]

Explanation:

The element 2 appears in both arrays only one time.

The element 3 appears in both arrays two times so we add element 3 equal to its number of occurrences.
*/

//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> intersectionArray(vector<int>& num1,vector<int>& num2 ){
//             vector<int> ans;
//             vector<int> visited(num2.size(),0);
            
//             for(int i=0;i<num1.size();i++){
//                 for(int j=0;j<num2.size();j++){
//                     if(num1[i]==num2[j] && visited[j]==0){
//                         ans.push_back(num2[j]);

//                         visited[j]=1;
//                         break;
//                     }
//                     else if(num2[j]>num1[i]){
//                         break;
//                     }
//                 }
//             }
//             return ans;
//         }
// };

// int main(){
//      vector<int> num1;
//     vector<int> num2;
//     vector<int> U;
//     int x,y;
//     cin>>x;
    
//     for(int i=0;i<x;i++){
//         int val;
//         cin>>val;
//         num1.push_back(val);
        
//     }

//     cin>>y;
//     for(int i=0;i<y;i++){
//         int val;
//         cin>>val;
//         num2.push_back(val);
//     }


//     Solution s;
//     U=s.intersectionArray(num1,num2);
//     for(auto i:U){
//         cout<<i<<" ";
//     }

// }

//*T.C:O(n1*n2)
//*S.C:O(n2)


//-----------------------X--------------------

//*Optimal


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> intersectionArray(vector<int>& num1,vector<int>& num2 ){
            vector<int> ans;
            int i=0,j=0;

            while(i<num1.size() && j<num2.size()){
                if(num1[i]<num2[j]){
                    i++;
                }
                else if(num2[j]<num1[i]){
                    j++;
                }
                else{
                    ans.push_back(num1[i]);
                    i++;
                    j++;
                }
            }

            return ans;

        }
};

int main(){
     vector<int> num1;
    vector<int> num2;
    vector<int> U;
    int x,y;
    cin>>x;
    
    for(int i=0;i<x;i++){
        int val;
        cin>>val;
        num1.push_back(val);
        
    }

    cin>>y;
    for(int i=0;i<y;i++){
        int val;
        cin>>val;
        num2.push_back(val);
    }


    Solution s;
    U=s.intersectionArray(num1,num2);
    for(auto i:U){
        cout<<i<<" ";
    }

}

//*T.C:O(n1+n2)
//*S.C:O(min(n1,n2))
