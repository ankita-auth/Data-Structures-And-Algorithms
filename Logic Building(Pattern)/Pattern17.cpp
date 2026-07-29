#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         void pattern17(int n){
           
            for(int i=1;i<=n;i++){
                char ch='A';
                for(int j=1;j<=n-i;j++){
                    cout<<" ";

                }
                for(int j=1;j<=i;j++){
                    cout<<ch;
                    ch++;

                }
                ch--;                
                for(int j=1;j<i;j++){
                    ch--;
                    cout<<ch;

                }
                
                
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern17(N);
    return 0;
}