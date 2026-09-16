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