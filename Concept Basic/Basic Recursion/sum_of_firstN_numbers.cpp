/*
Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.

Example 1:
Input : N = 4

Output : 10

Explanation : first four natural numbers are 1, 2, 3, 4.

Sum is 1 + 2 + 3 + 4 => 10.

Example 2:
Input : N = 2

Output : 3

Explanation : first two natural numbers are 1, 2.

Sum is 1 + 2 => 3.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
         int NnumbersSum(int N){
            if(N==0){
                return 0;
            }
            return N+NnumbersSum(N-1);
         }         
};
//*OR
// class Solution{	
// 	public:
//         int sum = 0;
// 		int NnumbersSum(int i, int N){
//             if(i > N) return sum;
//             sum+=i;
//             return NnumbersSum(i+1,N);
			
// 		}
// };
int main(){
    Solution sol;
    int n;
    cin>>n;
    //cout<<sol.NnumbersSum(1,n);
    cout<<sol.NnumbersSum(n);
}

//*T.C:O(n)
//*S.C:O(n)-->rescursion stack space