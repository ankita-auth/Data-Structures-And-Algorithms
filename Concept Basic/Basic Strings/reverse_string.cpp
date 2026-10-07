/*
Given a string, the task is to reverse it. The string is represented by an array of characters s.

Perform the reversal in place with O(1) extra memory.

Note: no need to return anything, modify the given list.

Example 1:
Input : s = ["h", "e" ,"l" ,"l" ,"o"]

Output : ["o", "l", "l", "e", "h"]

Explanation :

The given string is s = "hello" and after reversing it becomes s = "olleh".

Example 2:
Input : s = ["b", "y" ,"e" ]

Output : ["e", "y", "b"]

Explanation :

The given string is s = "bye" and after reversing it becomes s = "eyb".
*/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void reverseString(vector<char> &s){
//             for(int i=0;i<s.size()/2;i++){
//                 swap(s[i],s[s.size()-i-1]);
//             }
//             for(int i=0;i<s.size();i++){
//                 cout<<s[i];
//             }
//         }

// };
// int main(){
    
//     Solution sol;
//     string str;
//     cin >>str;              
//     vector<char> s(str.begin(), str.end());
//     sol.reverseString(s); 


//     return 0;
// }
//

//*T.C:O(n)
//*S.C:O(1)
//*---------------------------X------------------

//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void reverseString(vector<char> &s){
//             int n=s.size();
//             vector<char> temp(n);
//             for(int i=0;i<n;i++){
//                 temp[i]=s[n-i-1];
//             }

//             for(int i=0;i<n;i++){
//                 s[i]=temp[i];
//             }

//         }

// };
// int main(){
    
//     Solution sol;
//     string str;
//     cin >>str;              
//     vector<char> s(str.begin(), str.end());
//     sol.reverseString(s); 
//     for(char c:s){
//         cout<<c;
//     }


//     return 0;
// }

//

//*T.C:O(n)
//*S.C:O(n)-----------------------X-------------------
//*Optimal
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        void reverseString(vector<char> &s){
            int start=0,end=s.size()-1;
 
            while(start<end){
                char ch=s[start];
                s[start]=s[end];
                s[end]=ch;
 
                start++,end--;
            }
           
        }
 
};
int main(){
   
    Solution sol;
    string str;
    cin >>str;              
    vector<char> s(str.begin(), str.end());
    sol.reverseString(s);
    for(char c:s){
        cout<<c;
    }
 
 
    return 0;
}

//*T.C:O(n)
//*S.C:O(1)