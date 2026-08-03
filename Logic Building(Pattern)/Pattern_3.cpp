#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         void pattern3(int n){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
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
    s.pattern3(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)  