#include <bits/stdc++.h>
using namespace std;
//* Overrides Internal Comparator
bool internalComparator(int el1, int el2){
    if(el1<el2) return false;
    return true;
}
 
void explainComparator(){
    //el1 is 5
    //el2 is 6
    //tells if el1 should be before el2
    int arr[]={5,6,1,2};
    sort(arr,arr+4);//default Internal Comparator(Ascending)
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

    //--------------------------X-----------------

   
    sort(arr,arr+4,internalComparator);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }



    


 
 
}
 
 
 
int main(){
    explainComparator();
    return 0;
}