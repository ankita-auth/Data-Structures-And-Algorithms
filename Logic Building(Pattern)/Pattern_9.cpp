#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
       void pattern8(int n){
         for(int i=1;i<=n;i++){
                for(int j=1;j<=n-i;j++){
                    cout<<" ";
                }
                for(int k=1;k<=(2*i)-1;k++){
                    cout<<"*";
                }
                cout<<"\n";
            
       }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
               cout<<" ";
            }
            for(int j=2*(n-i)-1;j>=1;j--){
                cout<<"*";
            }
            cout<<endl;
            


        }
       }

};
int main(){
    Solution s;
    int n;
    cin>>n;
    s.pattern8(n);
    return 0;
}

//--------------------------X---------------------------------------

 
// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution {
// public:
//     void pattern9(int n) {
//         erect_pyramid(n);
//         inverted_pyramid(n);
//     }
// private:
//     void erect_pyramid(int n) {
//         for (int i = 0; i < n; i++){
         
//             for (int j = 0; j < n - i - 1; j++) {
//                 cout<< " ";
//             }
           
           
//             for (int j = 0; j < 2 * i + 1; j++) {
//                 cout<< "*";
//             }
 
         
//             cout << endl;
//         }
//     }
//     void inverted_pyramid(int n){
       
//         for (int i = 0; i < n; i++){
         
//             for (int j =0; j<i; j++){
//                 cout<< " ";
//             }
       
           
//             for(int j=0;j< 2*n -(2*i +1);j++){
//                 cout<< "*";
//             }
       
//             cout<< endl;
//         }
//     }
// };
 
// int main() {
//     int N = 5;
 
//     Solution sol;
 
//     sol.pattern9(N);
 
//     return 0;
// }
 