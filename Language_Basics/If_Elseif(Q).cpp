/*
Problem: Grade Calculator
 
Problem Statement:
Given the marks of a student, determine and print the corresponding grade.
 
Print:
- "Grade A" if marks >= 90
- "Grade B" if marks >= 70
- "Grade C" if marks >= 50
- "Grade D" if marks >= 35
- "Fail" otherwise
 
Note:
- Print the output exactly as specified.
- Do not change the letter casing or spacing.
 
Input:
- A single integer marks.
 
Output:
- Print the appropriate grade based on the given marks.
 
Examples:
 
Example 1:
Input:
95
 
Output:
Grade A
 
Explanation:
Since 95 >= 90, the student receives Grade A.
 
Example 2:
Input:
14
 
Output:
Fail
 
Explanation:
Since 14 < 35, the student fails.
 
Example 3:
Input:
70
 
Output:
Grade B
 
Explanation:
Since 70 >= 70 but < 90, the student receives Grade B.
 
Constraints:
0 <= marks <= 100
*/
 
 
 
 
//----------------------x----------------------------
 
 
 



#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
      void studentGrade(int marks){
        if(marks>=90){
            cout<<"Grade A";

        }
        else if(marks>=70){
            cout<<"Grade B";

        }
        else if(marks>=50){
            cout<<"Grade C";
        }
        else if(marks>=35){
            cout<<"Grade D";
        }
        else{
            cout<<"Fail";
        }
      }

};
int main(){
    Solution s;
    int m;
    cin>>m;
    s.studentGrade(m);

    return 0;
}