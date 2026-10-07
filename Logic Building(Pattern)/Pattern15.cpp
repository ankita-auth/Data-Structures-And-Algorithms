/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

ABCDE

ABCD

ABC

AB

A
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern15(int n){
            
            for(int i=n;i>=1;i--){
                for(char j='A';j<'A'+i;j++){
                    cout<<j;

                }
                
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern15(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)