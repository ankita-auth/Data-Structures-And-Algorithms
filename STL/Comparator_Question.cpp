#include <bits/stdc++.h>
using namespace std;
bool internalComparator(pair<int,int>a, pair<int,int>b){
    if(a.second>b.second) return true;
    if(a.second<b.second) return false;
    if(a.first<b.first) return true;
    return false;

    

}
void explainComparator(){
    pair<int,int> arr[]={{2,6},{1,5},{1,6},{3,9},{2,9}};
    //* Q->Sort it according to second element in descending(Output=>{2,9},{3,9},{1,6},{2,6},{1,5})
    //sort(arr,arr+5,internalComparator);
    sort(arr,arr+5);
    //(Output=>{1,5}{1,6}{2,6}{2,9}{3,9})
    for(int i=0;i<5;i++){
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}";
    }
}
int main(){

    explainComparator();
    return 0;
}