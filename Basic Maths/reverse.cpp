#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int reverseNumber(int n){
        int rev=0;
        string s="";
        if(n==0){
            return 0;
        }
        //helo
        while(n>0){
            s+=(n%10);
            n/=10;
        
        }
        rev=int(s);
        return rev;

        

    }


};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.reverseNumber(n);
    
}


//T.C: O(no of digit) = O(log10 num)
//S.C: O(1)


