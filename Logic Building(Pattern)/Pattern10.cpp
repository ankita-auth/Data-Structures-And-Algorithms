#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern10(int n){
            for(int i=1;i<=2*n-1;i++){
                if(i>=n){
                     for(int j=2*n-i;j>=1;j--){
                        cout<<"*";
                    }


                }
                else{
                    for(int j=0;j<i;j++){
                        cout<<"*";
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
    s.pattern10(N);
    return 0;
}

//T.C:O(n^2)
//S.C:O(1)