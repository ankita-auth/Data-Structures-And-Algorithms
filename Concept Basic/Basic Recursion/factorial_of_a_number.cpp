/*
Given an integer n, return the factorial of n.

Factorial of a non-negative integer, is the multiplication of all integers smaller than or equal to n (use 64-bits to return answer).

Example 1:
Input : n = 3

Output : 6

Explanation : Factorial = 1 * 2 * 3 => 6

Example 2:
Input : n = 5

Output : 120

Explanation : Factorial = 1 * 2 * 3 * 4 * 5 => 120
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         long long int factorial(int n){
            if(n<=1){
                return 1;
            }
            return n*factorial(n-1);
            
         }         
};
//*OR
// class Solution{
//     public:
//         int prod=1;
//         long long int factorial(int i,int n){
//             if(i>n){
//                 return prod;
//             }
//             prod*=i;
//             return factorial(i+1,n);
            
//          }         
// };
int main(){
    Solution sol;
    int n;
    cin>>n;
    //cout<<sol.factorial(1,n);
    cout<<sol.factorial(n);
}

//*T.C:O(n)
//*S.C:O(n)