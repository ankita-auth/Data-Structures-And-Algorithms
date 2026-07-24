#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    char lastChar(string& s){
        return s[s.size()-1];
    }

};
int main(){
    Solution s;
    string str;
    cin>>str;
    cout<<s.lastChar(str);

    return 0;
}