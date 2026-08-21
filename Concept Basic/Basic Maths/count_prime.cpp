#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         int primeUptoN(int n){
            int c=0;
            if(n<2){
                return c;
            }
            
            for(int i=2;i<=n;i++){
                bool p=true;
                for(int j=2;j<=sqrt(i);j++){
                    if(i%j==0){
                        p=false;
                    }
                }
                if(p){
                    c++;
                }
            }
            return c;
            


         }

};

int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.primeUptoN(n);
}

//------------------X-----------------

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     private:
//         bool isprime(int n){
//             if(n<=1){
//                 return false;

//             }
//             if(n == 2){
//                 return true;
//             }
//             for(int i=2; i*i<=n; i++){
//                 if(n%i == 0){
//                     return false;

//                 }

//             }
//             return true;
            
//         }
//     public:
//         int primeUptoN(int n){
//             int count = 0;
//             for(int i = 2; i<=n; i++){
//                 if(isprime(i)){
//                     count++;

//                 }
//             }
//             return count;


//         }
// };

// int main(){
//     int n;
//     cin >> n;
//     Solution s;
//     cout << s.primeUptoN(n);
//     return 0;

// }

//T.C:O(n*sqrt(n))
//S.C:O(1)