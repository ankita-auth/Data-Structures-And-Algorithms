#include <bits/stdc++.h>
using namespace std;
 
void explainReverse(){
    int arr[]={7,6,5,10,9};
    reverse(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    //* Output=>9 10 5 6 7 



 
 
}
 
 
 
int main(){
    explainReverse();
    return 0;
}