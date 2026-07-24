/*
Problem: Print the Given Number
 
Problem Statement:
Complete the function printNumber() which takes an integer as input
and prints it on the screen.
 
Input:
- A single integer.
 
Output:
- Print the given integer exactly as it is.
 
Examples:
 
Example 1:
Input:
7
 
Output:
7
 
Explanation:
The input number is printed as it is.
 
Example 2:
Input:
-5
 
Output:
-5
 
Explanation:
Negative numbers should also be printed without any changes.
 
Example 3:
Input:
0
 
Output:
0
 
Explanation:
Zero is printed as it is.
 
Constraints:
-1000 <= Number <= 1000
*/
 
 
 
 
 
 
 
//---------------------------x------------------------
 
 
 

#include <bits/stdc++.h>
using namespace std;
 
class Solution{
public:
   void printNumber(){
     int num;
     cin >> num;
     cout << num;
   }
 
};
 
 
int main(){
    // Solution* s=new Solution();
    // s->printNumber();

    Solution s;
    s.printNumber();

    return 0;
}