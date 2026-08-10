#include <bits/stdc++.h>
using namespace std;
void explainAccumulate(){
    int arr[5]={6,2,1,7,0};
    cout<<accumulate(arr,arr+5,5);//* Adds from 1st element to last adding to 5
    


}
int main(){

    explainAccumulate();
    return 0;
}