/*
//*Question:-

Problem: Print the Last Character of a String

Problem Statement:
Given a string s, return the last character of the given string.

Input:
- A single string s.

Output:
- Print the last character of the string.

Examples:

Example 1:
Input:
takeuforward

Output:
d

Explanation:
The last character of "takeuforward" is 'd'.

Example 2:
Input:
goodforyou

Output:
u

Explanation:
The last character of "goodforyou" is 'u'.

Example 3:
Input:
lovecoding

Output:
g

Explanation:
The last character of "lovecoding" is 'g'.

Constraints:
1 <= s.length <= 100
- The string consists only of lowercase English letters.
*/

//---------------------------x------------------------
//*Solution:-

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        char lastChar(string& a){
            return a[a.size() - 1];


        }
};

int main(){
    string a;
    cin >> a;

    Solution s;
    cout << s.lastChar(a);
    return 0;
}