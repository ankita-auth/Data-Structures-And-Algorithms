#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        bool perfectNumber(int n){
            int s=0;
            for(int i=1;i<n;i++){
                if(n%i==0){
                    s+=i;
                }
            }
            
            return s==n;
        }
        
        //OR

        // bool perfectNumber(int n){
        //     if(n<=1) return false;
        //     int sum = 0;
        //     for(int i=1; i<=sqrt(n);[//i*i<=n;] i++){
        //         if(n % i == 0){
        //             sum+=i;
        //             if(i != n/i){
        //                 sum += (n/i);
        //             }
        //         }
        //     }
        //     return sum == n;
 
 
 
 
        // }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.perfectNumber(n);
}

//T.C: O(sqrt(n))
//S.C: O(1)
