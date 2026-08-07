#include <bits/stdc++.h>
using namespace std;
void explainList(){

    list<int> ls={6,7};
    ls.push_front(1);
    ls.emplace_front(2);
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ls.front();

    //auto it=ls.end()-1;//* Not Possible

}
int main(){

    explainList();
    return 0;
}