#include <bits/stdc++.h>
using namespace std;
void explainPQ(){
    //* Stores the highest elemnt at the top [Max Heap]



    // priority_queue<int>pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(10);
    // pq.push(8);

    // cout<<pq.top()<<" ";//10
    // pq.pop();
    //cout<<endl;
    // while(pq.empty()==false){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    //     cout<<endl;
    // }
    
    //* Stores the highest elemnt at the top [Min Heap]
    priority_queue<int, vector<int>, greater<int>>pq1;
    // priority_queue<char, vector<char>, greater<char>>pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(10);
    pq1.push(8);
    pq1.emplace(100);
    cout<<"Size="<<pq1.size()<<endl;

    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
        cout<<endl;

    }
}
int main(){ 

    explainPQ();
    return 0;
}