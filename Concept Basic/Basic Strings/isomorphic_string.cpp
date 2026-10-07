/*
Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Example 1:
Input : s = "egg" , t = "add"

Output : true

Explanation :

The 'e' in string s can be replaced with 'a' of string t.

The 'g' in string s can be replaced with 'd' of t.

Hence all characters in s can be replaced to get t.

Example 2:
Input : s = "apple" , t = "bbnbm"

Output : false

Explanation :

Strings are matched index by index.

At index 0, 'a' maps to 'b'.

At index 1, 'p' also maps to 'b'.

This is invalid because two different characters (a and p) cannot map to the same character (b) in a one-to-one mapping.

Therefore, no valid mapping exists and the output is false.
*/

// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         bool isomorphicString(string s ,string t){
//             int n=s.length();
//             vector<int>a(n),b(n);
//             char sh=s[0],th=t[0];
//             int counts=1,countt=1;
//             a.push_back(counts);
//             b.push_back(countt);
//             for(int i=1;i<n;i++){
//                 if(sh!=s[i]){
//                     a.push_back(counts);
//                     sh=s[i],counts=0;
//                 }
//                 else{
//                     counts++;
//                 }
//                 if(th!=t[i]){
//                     b.push_back(countt);
//                     th=t[i],countt=0;
//                 }
//                 else{
//                     countt++;
//                 }
//             }
            
//             if(a==b){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
// };
 
// int main(){
//     Solution s;
//     if(s.isomorphicString("apple","bbnbm")){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }
 
//*code is little incorrect, but logic is correct
//*egg-[1,2]
//*ege-[1,1,1]
//-------------------------X----------------------
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        bool isomorphicString(string s ,string t){
            int smap[256]={0},tmap[256]={0};
            int n=s.size();
            for(int i=0;i<n;i++){
                if(smap[s[i]]!=tmap[t[i]]){
                    return false;
                }
                smap[s[i]]=i+1;
                tmap[t[i]]=i+1;
            }
            return true;
        }
};
 
int main(){
    string s,t;
    cin>>s>>t;
    Solution sol;
    if(sol.isomorphicString(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
//*T.C:O(n)
//*S.C:O(1)