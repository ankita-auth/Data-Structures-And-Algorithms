/*
You are given an integer n. Return the largest digit present in the number.

Example 1:
Input: n = 25

Output: 5

Explanation: The largest digit in 25 is 5.

Example 2:
Input: n = 99

Output: 9

Explanation: The largest digit in 99 is 9.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        int largest_digit(int n){
            int max = 0;
            
            while(n > 0){
                int d=n%10;
                if(max<d){
                    max=d;
                }
                n/=10;
             
            }
            return max;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.largest_digit(n);
    return 0;
}

//T.C: O(log10num)
//S.C: O(1)

