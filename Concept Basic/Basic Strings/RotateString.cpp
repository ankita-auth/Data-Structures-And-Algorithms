
//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         bool rotateString(string& s ,string& goal){
//             if (s.length() != goal.length()) {
//                  return false;  
//             }
//             int n=s.length();
//             for(int i=0;i<n;i++){  //---O(n)
//                 string left=s.substr(0,i);//---O(n)
//                 string right=s.substr(i); //---O(n)
//                 if(right+left==goal){
//                     return true;
//                 }
                
//             }
//             return false;
       
//         }
// };
 
// int main(){
//     string s,goal;
//     cin>>s>>goal;
//     Solution sol;
//     if(sol.rotateString(s,goal)){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }
//*T.C:O(n^2)
//*S.C:O(n)--->(left & right)
//---------------------------X--------------------------

//*Optimal
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        bool rotateString(string& s ,string& goal){
            if (s.length() != goal.length()) {
                return false;  
            }
            int n=s.length();
            string doubled=s+s;
            return doubled.find(goal)!=string::npos;  //---O(2*n)[lenght of string]
       
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

//* .find()->[Robin Karp Method]
//    If found → returns the starting index.
//    If not found → returns string::npos(mean-not found)

//*In Python-in
//*In Java-.contains()

//*T.C:O(n)
//*S.C:O(n)