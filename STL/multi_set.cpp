#include <bits/stdc++.h>
using namespace std;
void explainMultiSet(){
    //* Similar to set but contans duplicate element (in ascending order just like set)
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.emplace(21);

    // for(auto it:ms){
    //     cout<<it<<" ";
    // }
    //--------------X---------------
    //*  Size
    //cout<<ms.size();

    //--------------X---------------
    //* Finds first one
    // auto it=ms.find(1);
    // cout<<*it<<endl;

    //--------------X---------------
    //* Erase
    // auto it1=ms.erase(1);
    // for(auto it2:ms){
    //     cout<<it2<<" ";
    // }

    // auto it1=ms.erase(ms.find(1));
    // for(auto it2:ms){
    //     cout<<it2<<" ";
    // }

    //--------------X---------------
    //* Count
    //cout<<ms.count(1);

    //--------------X---------------
    //* Upper & Lower Bound
    auto a=ms.upper_bound(2);
    cout<<*a<<endl;
    auto b=ms.lower_bound(2);
    cout<<*b<<endl;


   


}
int main(){

    explainMultiSet();
    return 0;
}