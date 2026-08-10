#include <bits/stdc++.h>
using namespace std;
void explainUnorderedMap(){
    //* Not in order
    unordered_map<int,string> mpp;
    mpp.insert({4,"Raj"});
    mpp[1]="abc";
    mpp[1]="vik"; 
    mpp[2]="bcd";
    mpp.emplace(3,"cat");

    cout<<mpp.size()<<endl;
    
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }//* Prints in opposite oder of stored
    //* O(1)

    auto it1=mpp.find(4);
    cout<<(*it1).first<<"->"<<(*it1).second<<endl;
    

  
   


}
int main(){

    explainUnorderedMap();
    return 0;
}