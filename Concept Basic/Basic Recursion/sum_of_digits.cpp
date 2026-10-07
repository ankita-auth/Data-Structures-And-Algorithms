#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int addDigits(int num ){
            if(num<10){
                return num;
            }
            return addDigits(sumDigit(num));


        }
    private:
        int sumDigit(int num){
            if(num==0){
                return 0;
            }
            return (num%10) + sumDigit(num/10);

            
        }
};

int main(){
    int n;
    cin>>n;
    Solution s;
    cout << s.addDigits(n);
    return 0;
}

//*T.C: O(log n) – This is because each recursive call processes a number with fewer digits than the previous call, leading to logarithmic time complexity in terms of the number of digits.
 
 
//*S.C: O(logN)