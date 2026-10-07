/*
You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

Example 1:
Input: n = 25

Output: 52

Explanation: Reverse of 25 is 52.

Example 2:
Input: n = 123

Output: 321

Explanation: Reverse of 123 is 321.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        int reverseNumber(int n){
            int rev = 0;
            while(n > 0){
                int lastD = n%10;
                rev = rev * 10 + lastD;
                n/=10;
            }
            return rev;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.reverseNumber(n);
    return 0;
}

//T.C: O(log10num)
//S.C: O(1)



//*NOTE:
/*to_string: int to str
stoi: str to int*/