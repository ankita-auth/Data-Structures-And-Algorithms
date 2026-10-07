/* Given an integer n. 
You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*

**

*

**

***

*/

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


    //*Note:
    //If we are using static then we need to use ::(scope resolution) to call the function without object

//T.C:O(n^2)
//S.C:O(1)  