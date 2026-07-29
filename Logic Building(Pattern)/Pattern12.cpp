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