#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         void pattern1(int n){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
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
    s.pattern1(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)  