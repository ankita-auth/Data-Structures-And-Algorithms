/*
Given an input string as an array of characters, write a function that reverses the string.

Example 1:
Input : s = ["h", "e", "l", "l", "o"]

Output : ["o", "l", "l", "e", "h"]

Explanation : The given string is s = "hello" and after reversing it becomes s = "olleh".

Example 2:
Input : s = ["b", "y", "e" ]

Output : ["e", "y", "b"]

Explanation : The given string is s = "bye" and after reversing it becomes s = "eyb".
*/

// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         vector<char> ch;
//         vector<char> reverseString(vector<char>& s){
//             if(s.empty()){
//                 return ch;
//             }
//             ch.push_back(s.back());
//             s.pop_back();
//             return reverseString(s);


            
//         }         
// };
// int main(){
//     Solution sol;
//     vector<char> s;
//     char c;
//     while(cin>>c){
//         s.push_back(c);
//     }
//     vector<char> str=sol.reverseString(s);
//     for(auto i:str){
//         cout<<i;
//     }
// }

//*T.C:O(n)
//*S.C:O(n)

//-------------------X----------------------
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<char> reverseString(vector<char>& s){
            reverse(s,0,s.size()-1);  
            return s;          
        } 
    private:
        void reverse(vector<char>& s,int left,int right){
            if(left>=right){
                return;
            }
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            reverse(s,left+1,right-1);
        }        
};
int main(){
    Solution sol;
    vector<char> s;
    char c;
    while(cin>>c){
        s.push_back(c);
    }
    vector<char> str=sol.reverseString(s);
    for(auto i:str){
        cout<<i;
    }
}

//*T.C:O(n/2)=O(n)
//*S.C:O(n/2)=O(n)