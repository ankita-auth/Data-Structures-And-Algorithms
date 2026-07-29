#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern14(int n){
            for(int i=1;i<=n;i++){
                for(char j='A';j<='A'+(i-1);j++){
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
    s.pattern14(N);
    return 0;
}