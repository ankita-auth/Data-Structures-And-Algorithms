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