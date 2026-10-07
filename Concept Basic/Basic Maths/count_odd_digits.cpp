/*
You are given an integer n. You need to return the number of odd digits present in the number.

The number will have no leading zeroes, except when the number is 0 itself.

Example 1:
Input: n = 5

Output: 1

Explanation: 5 is an odd digit.

Example 2:
Input: n = 25

Output: 1

Explanation: The only odd digit in 25 is 5.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countOddDigits(int n){
        int count=0;
        if(n==0){
            return 0;
        }
        while(n>0){
            if((n%10)%2!=0){
                 count++;

            }
           
            n/=10;
        
        }
        return count;

        

    }


};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.countOddDigits(n);
    
}


//T.C: O(no of digit) = O(log10 num)
//S.C: O(1)


