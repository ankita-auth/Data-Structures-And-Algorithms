#include <bits/stdc++.h>
using namespace std;
void fun(int N){
    if(N==0){
        return;
    }
    fun(N-1);
    cout<<N<<endl;
}
int main(){
    int N;
    cin>>N;
    fun(N);
    return 0;
}