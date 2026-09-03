//*Sorting
 
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        string longestCommonPrefix(vector<string>& vec){
            if(vec.empty()) return "";
 
            sort(vec.begin(),vec.end());
            string a = vec[0];
            string b = vec[vec.size() -1];
 
            string c = "";
            int minLength = min(a.size(),b.size());
 
            for(int i=0; i<minLength; i++){
                if(a[i] != b[i]){
                    return c;
                }
                c+=a[i];
            }
            return c;
 
        }
};
 
int main(){
    vector<string> vec;
    string x;
    while(cin >> x){
        vec.push_back(x);
    }
    Solution s;
    cout << s.longestCommonPrefix(vec);
 
 
    return 0;
}
 
//*T.C: O(N*M*logN) + O(M)
//*S.C: O(M)
 
//m: maxm length of the string , n = no of string
 
 
//------------x-------------------
 
//*Vertical Scan
 
 
 
 