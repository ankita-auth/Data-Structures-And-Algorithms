// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         bool palindromeCheck(string& s){
//             string str=s;
//             for(int i=0;i<s.size()/2;i++){
//                 swap(s[i],s[s.size()-i-1]);
//             }
//             return s==str;
//         }
// };
// int main(){
//     Solution sol;
//     string s;
//     cin >>s;              
//     if(sol.palindromeCheck(s)){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }

//*T.C:O(n)
//*S.C:(1)
//-----------------------X--------------------

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool palindromeCheck(string& s){
            int left=0;
            int right=s.length()-1;
            while(left<right){
                if(s[left]!=s[right]){
                    return false;
                }
                left++;
                right--;
            }
            return true;
        }
};
int main(){
    Solution sol;
    string s;
    cin >>s;              
    if(sol.palindromeCheck(s)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}

//*T.C:O(n)
//*S.C:(1)

//*Can also be done using recursion