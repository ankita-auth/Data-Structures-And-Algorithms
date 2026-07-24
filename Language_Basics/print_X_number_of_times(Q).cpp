#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void printX(int X,int N){
        if(N==0){
            cout<<endl;
        }
        for(int i=0;i<N;i++){
            if(i==N-1){
                cout<<X<<endl;
            }else{
                cout<<X<<" ";

            }
            
        }
        
        
    }

};
int main(){
    Solution s;
    int X,N;
    cin>>X>>N;
    s.printX(X,N);

    return 0;
}