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