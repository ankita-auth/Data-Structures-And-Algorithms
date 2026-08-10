#include <bits/stdc++.h>
using namespace std;
 
void explainMaxElement(){
    int arr[]={7,6,5,10,9};
    //* Max

    // auto it=max_element(arr,arr+5);
    // cout<<*it;

    auto it=*max_element(arr,arr+5);
    cout<<it<<endl;

    //* Min

    auto it1=min_element(arr,arr+5);
    cout<<*it1<<endl;



 
 
}
 
 
 
int main(){
    explainMaxElement();
    return 0;
}