#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        bool isomorphicString(string s ,string t){
            if(s.length()!=t.length()){
                return false;
            }
            int n=s.length();
            vector<int>a(n),b(n);
            char sh=s[0],th=t[0];
            int counts=1,countt=1;
            for(int i=1;i<n;i++){
                if(sh!=s[i]){
                    a.push_back(counts);
                    sh=s[i],counts=0;
                }
                else{
                    counts++;
                }
                if(th!=t[i]){
                    b.push_back(countt);
                    th=t[i],countt=0;
                }
                else{
                    countt++;
                }
            }
            
            if(a==b){
                return true;
            }
            else{
                return false;
            }
        }
};
 
int main(){
    Solution s;
    if(s.isomorphicString("apple","bbnbm")){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
 