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