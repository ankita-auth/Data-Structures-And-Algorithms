/*
Given an integer num, return true if it is prime otherwise false.

A prime number is a number that is divisible only by 1 and itself.

Example 1:
Input : num = 5

Output : true

Explanation : The factors of 5 are 1 and 5 only.

So it satisfies the prime number condition.

Example 2:
Input : num = 15

Output : false

Explanation : The factors of 15 are 1, 3, 5, 15 only.

As the number has factors other than 1 and itself, So it is not a prime number.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool checkPrime(int num){
            if(num<=1){
                return false;
            }
           
            return prime(num,2);
            
        }  
    private:
        bool prime(int num,int i){
            if(i>sqrt(num)){
                return true;
            }
            if(num%i==0){
                return false;
            }
            return prime(num,i+1);

        }
};
int main(){
    Solution sol;
    int n;
    cin>>n;
    if(sol.checkPrime(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}

//*T.C:O(srqt(n))
//*S.C:O(sqrt(n))