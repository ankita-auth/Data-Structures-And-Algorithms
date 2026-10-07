/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

1        1
12      21
123    321
1234  4321
1234554321

*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern12(int n){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=2*n;j++){
                    if(j<=i){
                        cout<<j;
                    }
                    else if(j<=2*n-i){
                        cout<<" ";
                    }
                    else{
                        cout<<2*n-j+1;
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
    s.pattern12(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)