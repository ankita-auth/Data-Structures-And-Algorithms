#include <bits/stdc++.h>
using namespace std;
 
void explainPair(){
    // pair<int, int> pr1 = {2,8};
    // pair<int, int> pr1 = make_pair(2,8);
    // cout<<pr1.first<<" "<<pr1.second;
 
    // pair<int,char> pr1 = {2,'A'};
    // cout << pr1.second;
    
    //* Nested Pair
    pair<pair<int,char>, int> pr2 = {{4,'h'},3};
 
    cout << pr2.first.second << endl;
 
   
}
 
int main(){
    explainPair();
 
 
    return 0;
}
 