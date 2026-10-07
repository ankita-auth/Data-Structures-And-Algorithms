/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *

*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
       void pattern8(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
               cout<<" ";
            }
            for(int j=2*(n-i)-1;j>=1;j--){
                cout<<"*";
            }
            cout<<endl;
            


        }
       }

};
int main(){
    Solution s;
    int n;
    cin>>n;
    s.pattern8(n);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)  