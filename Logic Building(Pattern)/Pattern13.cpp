#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern13(int n){
            int x=0;
            for(int i=1;i<=n;i++){
                for(int j=0;j<i;j++){
                    cout<<++x<<" ";

                }
                
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern13(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)