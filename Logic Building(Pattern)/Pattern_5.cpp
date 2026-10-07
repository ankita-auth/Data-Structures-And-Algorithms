/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****

****

***

**

*


*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         void pattern5(int n){
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i;j++){
                    cout<<"*";
                }
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern5(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)  