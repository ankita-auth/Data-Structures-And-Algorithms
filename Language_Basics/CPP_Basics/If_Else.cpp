#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"Adult";

    }
    else if(age<18 && age>=10){
        cout<<"Teen";
    }
    else{
        cout<<"Child";
    }
}