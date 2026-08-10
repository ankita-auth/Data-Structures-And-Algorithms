#include <bits/stdc++.h>
using namespace std;
void explainMap(){
    //*(Unique Keys) Prints in ascendiing order of key
    //* Map are not consecutive as they are sorted on basis of keys
    map<int,string> mpp;
    mpp.insert({4,"Raj"});
    mpp[1]="abc";
    mpp[1]="vik"; //* Doesn't stores multiple keys, whatever stored in the end is stored
    mpp[2]="bcd";
    mpp.emplace(3,"cat");

    cout<<mpp.size()<<endl;
    
    // for(auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
          //* Pair is used
    // }

    //-----------------X---------------
    // auto it=mpp.find(4);//* Points to that Pair
    // cout<<(*it).first<<"->"<<(*it).second<<endl;

    //-----------------X-------------
    // auto it1=mpp.find(5);//* If not found, points to end
    // if(it1==mpp.end()){
    //     cout<<"not found";
    // }
    //--------------X---------------------
    //* Lower and Upper Bound [applies on Key]
    auto it2=mpp.lower_bound(2);
    cout<<(*it2).first<<"->"<<(*it2).second<<endl;
    auto it3=mpp.upper_bound(2);
    cout<<(*it3).first<<"->"<<(*it3).second;
    

  
   


}
int main(){

    explainMap();
    return 0;
}