// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int GCD(int n1,int n2){
//             while(n1%n2!=0){
//                 int t=n2;
//                 n2=n1%n2;
//                 n1=t;


//             }
//             return n2;

           


//         }
// };

// int main(){
//     int n1,n2;
//     cin >> n1>>n2;
//     Solution s;
//     cout << s.GCD(n1,n2);
//     return 0;

// }

//------------------------------------X----------------------------------------------

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int GCD(int n1,int n2){
            while(n1!=n2){
                if(n1>n2){
                    n1-=n2;
                }
                else{
                    n2-=n1;
                }


            }
            return n2;

           


        }
};

int main(){
    int n1,n2;
    cin >> n1>>n2;
    Solution s;
    cout << s.GCD(n1,n2);
    return 0;
}
//------------------------------------X------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int GCD(int n1, int n2){
//             int gcd = 1;
//             int n = min(n1,n2);
//             for(int i=1; i<=n ; i++){
//                 if(n1 % i ==0 && n2 %i == 0){
//                     gcd = i;
//                 }
//             }
//             return gcd;


//         }
  //                      [  OR ]
    //    int GCD(int n1, int n2){
    //         int n = min(n1,n2);
    //         for(int i=n; i>=1 ; i--){
    //             if(n1 % i ==0 && n2 %i == 0){
    //                 return i;
    //             }
    //         }
    //     }
 
// };

// int main(){
//     int n1,n2;
//     cin >> n1 >> n2;
//     Solution s;
//     cout << s.GCD(n1,n2);
//     return 0;


// }


//------------------------------------X------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int GCD(int n1, int n2){
//             while(n2 != 0){
//                 int r = n1 % n2;
//                 n1 = n2;
//                 n2 = r;
                
//             }
//             return n1;
            


//         }
// };

// int main(){
//     int n1,n2;
//     cin >> n1 >> n2;
//     Solution s;
//     cout << s.GCD(n1,n2);
//     return 0;


// }

//------------------------------------X------------------------------------------

//*Ecludian Algorithm(Striver)
 
// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         int GCD(int n1, int n2){
//             while(n1 != 0 && n2 != 0){
//                 if(n1 > n2){
//                     n1 = n1 % n2;
//                 }
//                 else {
//                     n2 = n2 % n1;
//                 }
//             }
//             if(n2 == 0){
//                 return n1;
//             }
//             return n2;
//         }
// };
// int main(){
//     int n1,n2;
//     cin >> n1 >> n2;
//     Solution s;
//     s.GCD(n1,n2);
//     return 0;
// }
 
// //*T.C: O(log(min(n1,n2)))
// //*S.C: O(1)