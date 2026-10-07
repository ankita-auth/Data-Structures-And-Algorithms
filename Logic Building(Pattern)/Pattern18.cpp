/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

E 

D E 

C D E 

B C D E 

A B C D E

*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern18(int n){
           
            for(int i=n;i>=1;i--){
               
                for(char j=i+'A'-1;j<=n+'A'-1;j++){
                    cout<<j<<" ";

                }
                
                
                
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern18(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)