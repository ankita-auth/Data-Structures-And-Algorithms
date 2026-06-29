#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>=b && a>=c){
//         cout<<a;
//     }
//     else if( b>=c){
//         cout<<b;
//     }
//     else{
//         cout<<c;
//     }
    
// }

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b ){
        if(a>=c){
            cout<<"A";

        }
        else{
            cout<<"C";
        }
    }
    else{
        if(b>=c){
            cout<<"B";
        }
        else{
            cout<<"C";
        }
    }
    
    
}

