/*
Problem: Check Whether a Person is an Adult or a Teen
 
Problem Statement:
Given an integer age, determine whether the person is an Adult or a Teen.
 
Print:
- "Adult" if age >= 18
- "Teen" if age < 18
 
Note:
- Print the output exactly as "Adult" or "Teen".
- Do not change the letter casing.
 
Input:
- A single integer age.
 
Output:
- Print "Adult" or "Teen" based on the given condition.
 
Examples:
 
Example 1:
Input:
19
 
Output:
Adult
 
Explanation:
Since 19 >= 18, the person is an Adult.
 
Example 2:
Input:
7
 
Output:
Teen
 
Explanation:
Since 7 < 18, the person is a Teen.
 
Example 3:
Input:
18
 
Output:
Adult
 
Explanation:
Since 18 >= 18, the person is an Adult.
 
Constraints:
0 <= age <= 100
*/
 
//-----------------------------X------------------------------------




#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void isAdult(int age){
            if (age>=18){
                cout<<"Adult"<<endl;
            }
            else{
                cout<<"Teen"<<endl;
            }
        }

};
int main(){
    Solution s;
    int age;
    cin>>age;
    s.isAdult(age);


    return 0;
}

//--------------------------X-------------------------
// #include<bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//       void check(int age){
//         cin >> age;
//         if(age >= 18){
//             cout <<"Adult" <<endl;
 
//         }
//         else{
//             cout <<"Teen" << endl;
//         }
//       }
 
// };
 
// int main(){
//     Solution s;
//     int age;
//     s.check(age);
//     return 0;
 
// }
 