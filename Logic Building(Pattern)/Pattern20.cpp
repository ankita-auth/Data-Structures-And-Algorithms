#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         void pattern20(int n){
             bool t=false;
             for(int i=1;i<=2*n-1;i++){
                if(i>n){
                    i=2*n-i;
                    t=true;
                }
                for(int j=i;j>=1;j--){
                    cout<<"*";
                }
                for(int j=1;j<=n-i;j++){
                    cout<<"  ";
                }
                for(int j=i;j>=1;j--){
                    cout<<"*";
                }
                if(t==true){
                    i=2*n-i;
                    t=false;
                }
                
                cout<<"\n";
            }
            

         }

};
int main(){
    Solution s;
    int N;
    cin>>N;
    s.pattern20(N);
    return 0;
}



//--------------------------------------------X-------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     void patterns20(int n)
//     {
//         int k=0;
//         for (int i = 1; i < 2 * n; i++)
//         {
            
            

//             if (i <= n)
//             {
//                 for (int j = 1; j <= 2 * n; j++)
//                 {
//                     if (j <= i || j > 2*n - i)
//                     {

//                         cout << "*";
//                     }
//                     else
//                     {
//                         cout << " ";
//                     }
                    
//                 }
//                 cout << endl;
//             }
//             else
//             {
                
//                 for (int j = 1; j <= 2 * n; j++)
//                 {
//                     if (j <= 2 * n - i || j >= 2 * i - n - k)
//                     {
//                         cout << "*";
//                     }
                    
//                     else
//                     {
//                         cout << " ";
//                     }

                    
//                 }
//                 k++;
//                 cout <<endl;
                
//             }
//         }
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;
//     Solution s;
//     s.patterns20(n);
//     return 0;
// }

//T.C:O(n^2)
//S.C:O(1)