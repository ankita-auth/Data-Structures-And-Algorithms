/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

1 

0 1 

1 0 1 

0 1 0 1 

1 0 1 0 1

*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern11(int n){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                    if((j+i)%2==0){
                        cout<<"1";
                    }
                    else{
                        cout<<"0";
                    }
                }
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern11(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)