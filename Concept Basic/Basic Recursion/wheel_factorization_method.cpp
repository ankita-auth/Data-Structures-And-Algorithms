#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool checkPrime(int num){
            if(num<=1){
                return false;
            }
            if(num<=3){
                return true;
            }
            if(num %2==0 || num %3==0){
                return false;
            }
            for(int i=5;i*i<=num;i+=6){
                if(num%i==0 || num%(i+2)==0){
                    return false;
                }
            }
            return true;
        }

};
int main(){
    int num;
    cin>>num;
    Solution sol;
    bool isPrime=sol.checkPrime(num);
    if(isPrime)cout<<"True";
    else cout<<"False";
    return 0;
}