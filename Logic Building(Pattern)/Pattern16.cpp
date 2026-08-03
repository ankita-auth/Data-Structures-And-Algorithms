#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern16(int n){
          
            for(char i='A';i<='A'+n-1;i++){
                for(char j=1;j<=int(i-'A')+1;j++){
                    cout<<i;

                }
                
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern16(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)