#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string largeOddNum(string& s){
            int n=s.length();
            int ind=-1;
            int i;
            for(int i=n-1;i>0;i--){                
                    if((s[i]-'0')%2==1){
                       ind=i;
                       break;
                    }
            }
            i=0;
            while(s[i]=='0' && i<=ind){
                i++;
            }
            return s.substr(i,ind-i+1);
                
           
        }
};
int main(){
    Solution sol;
    string str;
    cin >>str; 
    cout<<sol.largeOddNum(str);
    return 0;
}
//*T.C: O(n)
//*S.C: O(n)
/*Space Complexity: O(N), The auxiliary space used is O(1) but if the
space for returned string is considered (which will be O(N) in the worst
case), the overall space complexity comes out to be O(N).*/