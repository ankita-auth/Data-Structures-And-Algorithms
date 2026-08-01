#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         void pattern2(int n){
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    cout<<"*";
                }
                cout<<"\n";
            }

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern2(N);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//          static void pattern2(int n){
//             for(int i=0;i<n;i++){
//                 for(int j=0;j<i;j++){
//                     cout<<"*";
//                 }
//                 cout<<"\n";
//             }

//          }

// };
// int main(){

//     int N;
//     cin>>N;
//     Solution::pattern2(N);
//     return 0;
// }

//T.C:O(n^2)
//S.C:O(1)  [i,j]