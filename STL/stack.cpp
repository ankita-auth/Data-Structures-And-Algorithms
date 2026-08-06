#include <bits/stdc++.h>
using namespace std;
void explainStack(){
    //Last In First Out
    // stack<int> st;
    // st.push(1);
    // st.push(7);
    // st.push(71);
    // st.push(73);
    // st.push(17);
    // st.push(27);
    // st.emplace(100);

    // while(st.empty()==false){
    //     cout<<st.top()<<" ";
    //     st.pop();

    // }


    //cout<<st.size()<<endl;

    //cout<<st.top()<<" ";
    //st.pop();//deletes 7 from stack
    //cout<<st.top()<<" ";
    //st.pop();//deletes1 from stack

    //cout<<st.top()<<" ";//runtime error

    // *Swap
    stack<int>st1;
    st1.push(2);
    st1.push(4);
    st1.push(6);
    stack<int>st2;
    st2.push(1);
    st2.push(3);
    st2.push(5);
    swap(st1,st2);

    while(st1.empty()==false){
        cout<<st1.top()<<" ";
        st1.pop();

    }



    



}
int main(){

    explainStack();
    return 0;
}