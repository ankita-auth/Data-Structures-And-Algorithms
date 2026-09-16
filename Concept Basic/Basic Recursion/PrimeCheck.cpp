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