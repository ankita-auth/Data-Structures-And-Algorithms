#include <bits/stdc++.h>
using namespace std;
 
void explainVector(){
    //int arr[5]; //* can't change size
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    vec.emplace_back(5);

    // cout<<vec.size()<<endl; //3

    //* zero based indexing
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;

   
    //* iterator
    //[1,2,3]
    // vector<int>::iterator beginitr=vec.begin();
    // cout<<*beginitr<<endl;
    // //cout<<itr<<endl; //error
    // vector<int>::iterator enditr=vec.end();
    // enditr-=1;
    // cout<<*enditr;
    // cout<<endl;
    // for(vector<int>::iterator i=beginitr;i<=enditr;i++){
    //     cout<<*i<<" ";
    // }

    //* auto
    auto beginitr=vec.begin();
    auto enditr=vec.end();
    // for(auto i=beginitr;i<enditr;i++){
    //     cout<<*i<<" ";
    // }
 
    for(auto i:vec){
        cout<<i<<" ";
    }
   
}
 
int main(){
    explainVector();
 
 
    return 0;
}
 