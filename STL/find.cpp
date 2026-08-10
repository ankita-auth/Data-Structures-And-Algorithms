#include <bits/stdc++.h>
using namespace std;
void explainFind(){
    int arr[6]={6,2,1,1,7,0};
    int num=8;
    auto it=find(arr,arr+5,num);
    //cout<<*it;
    if(it==(arr+5)){
        cout<<"not found";
    }
    


}
int main(){

    explainFind();
    return 0;
}