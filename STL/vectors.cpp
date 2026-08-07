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

    //-------------------X-------------------
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

    //----------------------X------------------------
    //* auto
    // auto beginitr=vec.begin();
    // auto enditr=vec.end();
    // // for(auto i=beginitr;i<enditr;i++){
    // //     cout<<*i<<" ";
    // // }
 
    // for(auto i:vec){
    //     cout<<i<<" ";
    // }



    //--------------------X----------------------
    //* Reverser Iterator
    // auto reverseBegin=vec.rbegin();//points to actually last element
    // auto reverseEnd=vec.rend();//points to actually one before first elelment
    // for(auto i=reverseBegin;i<reverseEnd;i++){
    //     cout<<*i<<" ";
    // } //5 0 2 1


    // vector<int> v(5,8);
    // vector<int> v={7,8};
    //vector<int> v(5);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(0);
    // v.emplace_back(5);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    //8 8 8 8 8 1 2 0 5 
    //7 8 1 2 0 5
    //0 0 0 0 0 1 2 0 5

    // cout<<"\n";

    //----------------------------X---------------------
    //* Copy Constructor
    // vector<int> dupvec(v);
    // for(auto i:dupvec){
    //     cout<<i<<" ";
    // }

    // vector<int> dupvec(v.begin()+1,v.end()-1);
    // for(auto i:dupvec){
    //     cout<<i<<" ";
    // }

    //---------------------X--------------------------

    // cout<<v.front()<<" ";//prints first element
    // cout<<v.back()<<" ";//prints last element
    // v.pop_back();
    // cout<<v.back();


    auto it=vec.end()-1;//* Possible
    //---------------------X--------------------------
    //v.erase(v.begin()+2);//deletes 3rd element in vector v
    //v.erase(v.begin()+1,v.end()-1);//deletes from 3rd element to last in vector v

    //-----------------------X------------------
    //* clear
    // v.clear();
    // for(auto i:v){
    //     cout<<i<<" ";
    // }

    //-----------------------X------------------
    //* access element
    // cout<<v[6]<<endl;
    // cout<<v.at(6); //2
    //---------------------------X------------------------------------
    //* Swap
    // vector<int> v1={2,8};
    // vector<int> v2={6,4};
    // swap(v1,v2);
    // for(auto i:v1){
    //     cout<<i<<" ";
    // }

    //* Insert
    vector<int> vec={7,8,8,6,7};
    vec.insert(vec.begin()+2,4);
    for(auto i:vec){
        cout<<i<<" ";
    }




   
}
 
int main(){
    explainVector();
 
 
    return 0;
}
 