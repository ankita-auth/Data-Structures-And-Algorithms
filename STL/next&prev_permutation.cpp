#include <bits/stdc++.h>
using namespace std;
 
void explainNext_PrevPermutation(){
    //*Gives the next Permutation
    //*Gives in sorted Manner
    //*Works on string,array ,vector....
 
    //string str = "abc";
    //*Output
    //abc
    //acb
    //bac
    //bca
    //cab
    //cba
 
    string str = "bca";
 
    //*Output
    //bca
    //cab
    //cba
 
    do{
        cout << str << endl;
 
    // }while(next_permutation(str.begin(),str.end()));
 
    //*Part of the String
    // }while(next_permutation(str.begin(),str.begin()+2));
 
    //*Output(str = "bca")=>
    //bca
    //cba
 
 
    //*Previous Permutation
    }while(prev_permutation(str.begin(),str.end()));
 
    //*Output(str="bca")=>
    //bca
    //bac
    //acb
    //abc
 
 
}
 
 
 
int main(){
    explainNext_PrevPermutation();
    return 0;
}