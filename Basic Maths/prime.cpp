#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        bool prime(int n){
            if(n<=1){
                return false;
            }
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    return false;
                   
                }
            }
            return true;;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.prime(n);
    return 0;
}

//T.C: O(n)
//S.C: O(1)

