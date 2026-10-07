/*
You are given an integer n. You need to return the number of digits in the number.

The number will have no leading zeroes, except when the number is 0 itself.

Example 1:
Input: n = 4

Output: 1

Explanation: There is only 1 digit in 4.

Example 2:
Input: n = 14

Output: 2

Explanation: There are 2 digits in 14.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countDigits(int n){
        int count=0;
        if(n==0){
            return 1;
        }
        while(n>0){
            count++;
            n/=10;
        
        }
        return count;

        //OR
        // if(n==0){
        //     return 1;
        // }
        //return log10(n)+1

    }


};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.countDigits(n);
    
}

//Time Complexity=O(num_of_digits)=O(log10(num)+1)=O(log10(num))

//Space complexity=O(1)