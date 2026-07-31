#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern21(int n){
           
            for(int i=1;i<=n;i++){
               
                for(int j=1;j<=n;j++){
                    if(i==1 || i==n || j==1 || j==n){
                        cout<<"*";

                    }
                    else{
                            cout<<" ";
                        
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
    s.pattern21(N);
    return 0;
}