#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        bool rotateString(string& s ,string& goal){
            int n=s.length();
            for(int i=0;i<n;i++){
                string temp=s.substr(i,(n-i))+s.substr(0,i);
                if(temp==goal){
                    return true;
                }
                
            }
            return false;
       
        }
};
 
int main(){
    string s,goal;
    cin>>s>>goal;
    Solution sol;
    if(sol.rotateString(s,goal)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
 