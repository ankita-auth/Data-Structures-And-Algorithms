#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool palindromeCheck(string& s){
           
            return reverse(s,0,s.length()-1);
            
        }  
    private:
        bool reverse(string& s,int left,int right){
            if(left>=right){
                return true;
            }
            if(s[left]!=s[right]){
                return false;
            }
            return reverse(s,left+1,right-1);

        }
};
int main(){
    Solution sol;
    string s;
    cin>>s;
    if(sol.palindromeCheck(s)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}

//*T.C:O(n/2)=O(n)
//*S.C:O(n/2)=O(n)