/*
You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

Example 1:
Input: n = 153

Output: true

Explanation: Number of digits : 3.

1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

Therefore, it is an Armstrong number.

Example 2:
Input: n = 12

Output: false

Explanation: Number of digits : 2.

12 + 22 = 1 + 4 = 5.

Therefore, it is not an Armstrong number.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
         int count_digits(int n){
            if(n == 0){
                return 1;
            }
            return log10(n)+1;
         
        }

    public: 

        bool armstrong(int n){
            int sum=0;
            int d=count_digits(n);
            int num=n;
            while(n>0){
                sum+=pow((n%10),d);
                n/=10;


            }
            return sum==num;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.armstrong(n);
    return 0;
}

//T.C: O(digits*log2(digits))
//S.C: O(1)

