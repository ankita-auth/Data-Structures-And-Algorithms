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
// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         bool isomorphicString(string s ,string t){
//             int smap[256]={0},tmap[256]={0};
//             int n=s.size();
//             for(int i=0;i<n;i++){
//                 if(smap[s[i]]!=tmap[t[i]]){
//                     return false;
//                 }
//                 smap[s[i]]=i+1;
//                 tmap[t[i]]=i+1;
//             }
//             return true;
//         }
// };
 
// int main(){
//     string s,t;
//     cin>>s>>t;
//     Solution sol;
//     if(sol.isomorphicString(s,t)){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }
 