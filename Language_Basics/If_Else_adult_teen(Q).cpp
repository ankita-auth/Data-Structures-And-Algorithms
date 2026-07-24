#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void isAdult(int age){
            if (age>=18){
                cout<<"Adult"<<endl;
            }
            else{
                cout<<"Teen"<<endl;
            }
        }

};
int main(){
    Solution s;
    int age;
    cin>>age;
    s.isAdult(age);


    return 0;
}

//--------------------------X-------------------------
// #include<bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//       void check(int age){
//         cin >> age;
//         if(age >= 18){
//             cout <<"Adult" <<endl;
 
//         }
//         else{
//             cout <<"Teen" << endl;
//         }
//       }
 
// };
 
// int main(){
//     Solution s;
//     int age;
//     s.check(age);
//     return 0;
 
// }
 