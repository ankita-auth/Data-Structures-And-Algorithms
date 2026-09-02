#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string largeOddNum(string& s){
            int n=s.size();
            for(int i=n-1;i>0;i--){                
                    if((s[i]-'0')%2==1){
                        return s.substr(0,i+1);
                    }
            }
                
           
        }
};
int main(){
    Solution sol;
    string str;
    cin >>str; 
    cout<<sol.largeOddNum(str);
    return 0;
}
