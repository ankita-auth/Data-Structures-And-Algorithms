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

