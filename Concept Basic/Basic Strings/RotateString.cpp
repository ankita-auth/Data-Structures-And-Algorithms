/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.

Example 1:
Input : s = "abcde" , goal = "cdeab"

Output : true

Explanation :

After performing 2 shifts we can achieve the goal string from string s.

After first shift the string s is => bcdea

After second shift the string s is => cdeab.

Example 2:
Input : s = "abcde" , goal = "adeac"

Output : false

Explanation :

Any number of shift operations cannot convert string s to string goal.
*/

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