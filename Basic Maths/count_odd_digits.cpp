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


