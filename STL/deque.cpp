#include <bits/stdc++.h>
using namespace std;
void explainDeque(){

    deque<int> ls={6,7};
    ls.push_front(1);
    ls.emplace_front(2);
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ls.front();

}
int main(){

    explainDeque();
    return 0;
}