/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input : str = ["flowers" , "flow" , "fly", "flight" ]

Output : "fl"

Explanation :

All strings given in array contains common prefix "fl".

Example 2:
Input : str = ["dog" , "cat" , "animal", "monkey" ]

Output : ""

Explanation :

There is no common prefix among the given strings in array.
*/

//*Sorting
 
// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         string longestCommonPrefix(vector<string>& vec){
//             if(vec.empty()) return "";
 
//             sort(vec.begin(),vec.end());
//             string a = vec[0];
//             string b = vec[vec.size() -1];
 
//             string c = "";
//             int minLength = min(a.size(),b.size());
 
//             for(int i=0; i<minLength; i++){
//                 if(a[i] != b[i]){
//                     return c;
//                 }
//                 c+=a[i];
//             }
//             return c;
 
//         }
// };
 
// int main(){
//     vector<string> vec;
//     string x;
//     while(cin >> x){
//         vec.push_back(x);
//     }
//     Solution s;
//     cout << s.longestCommonPrefix(vec);
 
 
//     return 0;
// }
 
//*T.C: O(N*M*logN) + O(M)
//*S.C: O(M)
 
//m: maxm length of the string , n = no of string
 
 
//------------x-------------------
 
//*Vertical Scan
 
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        string longestCommonPrefix(vector<string>& str){
            if(str.empty()) return "";
 
            for(int i=0; i<str[0].length(); i++){
                char ch = str[0][i];
 
                for(int j=1; j<str.size(); j++){
                    if(i == str[j].size() || ch != str[j][i]){
                        return str[0].substr(0,i);
                    }
                }
            }
            return str[0];
        }
 
 
};
 
int main(){
    vector<string> str;
    string x;
    while(cin >> x){
        str.push_back(x);
    }
    Solution s;
    cout<< s.longestCommonPrefix(str);
   
 
    return 0;
}
 
//*T.C: O(N*M)
//*S.C: O(M)
 
 
 