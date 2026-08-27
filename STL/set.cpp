#include <bits/stdc++.h>
using namespace std;
void explainSet(){

      //*Sets are non contgious(so we can't access particular element using s[i])
 
    // set<int>st;
    // st.insert(2);
    // st.insert(21);
    // st.insert(21);
    // st.insert(21);
    // st.insert(12);
    // for(auto it:st){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    //auto it=st.find(12);//* if not found then its value is st.end(), if found then it will return 12[Iterator]
    // if(it!=st.end()){
    //     cout<<*it;
    // }
    //-------------------X----------------------
    // cout << st.count(21);
    // cout << st.count(100);
    //*returns either 0->not found or 1-> found

    //----------------X--------------------
    //auto it=st.end()-1;//* Not Possible directly
    // auto it=st.end();
    // it--;
    // cout<<*it<<endl;
    //------------------X----------------------


    // st.erase(21); 
    // for(auto i:st){
    //     cout<<i<<" ";
    // }

    //---------------------X-----------------
    // auto it=st.end();
    // it--,it--;
    // st.erase(it); //delete last 2nd element
    // for(auto it:st){
    //     cout<<it<<" ";
    // }
    //---------------------X-----------------
    set<int>st1;
    st1.insert(2);
    st1.insert(21);
    st1.insert(12);
    st1.insert(211);
    st1.insert(213);
    // auto it1=st1.begin();
    // it1++;
    // auto it2=st1.end();
    // it2--;
    // st1.erase(it1,it2); //Deletes all middle elements
    // for(auto i:st1){
    //     cout<<i<<" ";
    // }
    //---------------------X-----------------
    //* Lower Bound
    //* Returns an iterator that points to an element
    //* that is >= given
    // auto it=st1.lower_bound(11);
    // cout<<*it<<endl; //12
    // auto it1=st1.lower_bound(214);
    // if(it1==st1.end()){
    //     cout<<"end";
    // }  //end
    //* Upper Bound
    //* Returns an iterator that points to an element
    //* that is > given
    auto it=st1.upper_bound(12);
    cout<<*it<<endl; //21










}
int main(){

    explainSet();
    return 0;
}