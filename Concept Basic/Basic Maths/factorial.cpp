/*
You are given an integer n. Return the value of n! or n factorial.

Factorial of a number is the product of all positive integers less than or equal to that number.

Example 1:
Input: n = 2

Output: 2

Explanation: 2! = 1 * 2 = 2.

Example 2:
Input: n = 0

Output: 1

Explanation: 0! is defined as 1.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        int factorial(int n){
            if(n==0){
                return 1;
            }
            int f=1;
            for(int i=1;i<=n;i++){
                f*=i;
            }
            return f;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.factorial(n);
    return 0;
}

//T.C: O(n)
//S.C: O(1)

