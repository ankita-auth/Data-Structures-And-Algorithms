#include <bits/stdc++.h>
using namespace std;
void explainUnorderedSet(){
    //* No repeated elemeents but are randomly ordered
    //* All functions of set is applied except upper and lower bound
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);
    st.insert(12);

    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;

    auto i=st.find(11); //O(1) [in set=O(n)]
    cout<<*i;

   

}
int main(){

    explainUnorderedSet();
    return 0;
}