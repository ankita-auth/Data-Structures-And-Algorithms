#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        bool pallindrome(int n){
            int num=n;
            int rev = 0;
            while(n > 0){
                int lastD = n%10;
                rev = rev * 10 + lastD;
                n/=10;
            }
            return num==rev;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.pallindrome(n);
    return 0;
}

//T.C: O(log10num)
//S.C: O(1)


