#include <bits/stdc++.h>
using namespace std;

void explainSort(){
    //* Array
    int arr[5]={6,2,1,7,8};
    sort(arr+1,arr+4);
    //sort(arr,arr+5); //* Sorts all
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    } //* Output=>6 1 2 7 8

    cout<<endl;
    //-----------------X-----------
    //* Vector
    vector<int> v={5,9,8,2,1};
    //sort(v.begin(),v.end());
    sort(v.begin()+1,v.begin()+4);//* sorts from 9 to 2[leaving begin+4]
    for(auto it:v){
        cout<<it<<" ";
    }//* Output=>5 2 8 9 1

}
int main(){
    explainSort();
    return 0;
}