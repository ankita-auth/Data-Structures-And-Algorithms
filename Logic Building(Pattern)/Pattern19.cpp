#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         void pattern19(int n){
            for(int i=n;i>=1;i--){
                for(int j=i;j>=1;j--){
                    cout<<"*";
                }
                for(int j=1;j<=n-i;j++){
                    cout<<"  ";
                }
                for(int j=i;j>=1;j--){
                    cout<<"*";
                }
                cout<<"\n";
            }
             for(int i=1;i<=n;i++){
                for(int j=i;j>=1;j--){
                    cout<<"*";
                }
                for(int j=1;j<=n-i;j++){
                    cout<<"  ";
                }
                for(int j=i;j>=1;j--){
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
    s.pattern19(N);
    return 0;
}
//-----------------------------------X----------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void patterns19(int n){
//             for(int i=0; i<n; i++){
//                 for(int j=n-i; j>=1; j--){
//                     cout <<"*";
//                 }

//                 for(int j =1; j<=2*i; j++){
//                     cout << " ";
//                 }

//                 for(int j=n-i; j>=1; j--){
//                     cout <<"*";
//                 }
//                 cout << endl;

//             }
//             for(int i=0; i<n; i++){
//                 for(int j=1; j<=i+1; j++){
//                     cout <<"*";
//                 }

//                 for(int j =1; j<=2*(n-i-1); j++){
//                     cout << " ";
//                 }

//                 for(int j=1; j<=i+1; j++){
//                     cout <<"*";
//                 }
//                 cout << endl;

//             }


            


//         }
// };

//T.C:O(n^2)
//S.C:O(1)