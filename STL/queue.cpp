#include <bits/stdc++.h>
using namespace std;
void explainqueue(){
    //FIFO
    queue<int> q1;
    q1.push(2);
    q1.push(22);
    q1.push(23);
    q1.push(24);
    q1.emplace(100);;
    cout<<"Size="<<q1.size()<<endl;
    while(q1.empty()==false){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"Size="<<q1.size()<<endl;//size=0
    queue<int> q2;
    q2.push(11);
    q2.push(111);
    swap(q1,q2);
    while(q1.empty()==false){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    

    

}
int main(){

    explainqueue();
    return 0;
}