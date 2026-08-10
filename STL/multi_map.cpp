#include <bits/stdc++.h>
using namespace std;
void explainMultiMap(){

    //* Duplicate possible with ordered keys(same as map but not unique element)
    multimap<int,char> mpp;
    mpp.insert({3,'b'});
    mpp.insert({1,'a'});
    mpp.insert({1,'b'});
    mpp.insert({1,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'b'});
    // for(auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    //* Here i.second act as i.end()
    auto i=mpp.equal_range(2);
    for(auto j=i.first;j!=i.second;j++){
        cout<<(*j).first<<"->"<<(*j).second<<endl;
    }//* =>Output
    //* 2->a
     //* 2->a
     //* 2->b

}
int main(){
    explainMultiMap();
    return 0;
}