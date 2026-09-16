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