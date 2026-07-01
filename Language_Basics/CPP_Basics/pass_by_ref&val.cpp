#include <bits/stdc++.h>
using namespace std;
// void explainPassByValueAndReference(int x){
//     x=x+10;
// }
// int main(){
//     int num=5;
//     explainPassByValueAndReference(num);
//     cout<<num;
//     return 0;

// }
//-------------------------------------X---------------------------------
// void explainPassByValueAndReference(int &x){
//     x=x+10;
// }
// int main(){
//     int num=5;
//     explainPassByValueAndReference(num);
//     cout<<num;
//     return 0;

// }

//-----------------------------------------------X-----------------------------------------
// void explainPassByValueAndReference(int arr[]){
//     arr[0]=100;
// }
// int main(){
//     int arr[]={6,7,8,1,2};
//     explainPassByValueAndReference(arr);
//     cout<<arr[0];
//     return 0;

// }
//------------------------------------------------------X-----------------------
void explainPassByValueAndReference(int *arr){
    arr[0]=100;
}
int main(){
    int arr[]={6,7,8,1,2};
    explainPassByValueAndReference(arr);
    cout<<arr[0];
    return 0;

}