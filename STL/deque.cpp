#include <bits/stdc++.h>
using namespace std;
void explainDeque(){

    deque<int> dq={6,7};
    dq.push_front(1);
    dq.emplace_front(2);
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<dq.front();

    auto it=dq.end()-1;//* Possible


}
int main(){

    explainDeque();
    return 0;
}