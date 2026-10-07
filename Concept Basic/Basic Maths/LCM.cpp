/*
You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.

The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.

Example 1:
Input: n1 = 4, n2 = 6

Output: 12

Explanation: 4 * 3 = 12, 6 * 2 = 12.

12 is the lowest integer that is divisible both 4 and 6.

Example 2:
Input: n1 = 3, n2 = 5

Output: 15

Explanation: 3 * 5 = 15, 5 * 3 = 15.

15 is the lowest integer that is divisible both 3 and 5
*/

//*------------------------------------x---------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int LCM(int n1, int n2){
//             int i = 1;
//             int max1 = max(n1,n2);
//             do{
//                 int multiple = i * max1;
//                 if(multiple % n1 == 0 && multiple % n2 == 0){
//                     return multiple;
//                 }
//                 i = i+1;
//             }while(1);


//         }
// };

// int main(){
//     int n1, n2;
//     cin >> n1 >> n2;
//     Solution s;
//     cout << s.LCM(n1,n2);
//     return 0;


// }

//*T.C: O(min(n1,n2)) 
//min(n1,n2) : gives no of iteration(operation)
//*S.C: O(1)


//*OR
#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
        int GCD(int n1, int n2){
            while(n2 != 0){
                int r = n1 % n2;
                n1 = n2;
                n2 = r;
            }
            return n1;
        }
    public:
        int LCM(int n1,int n2){
            return (n1*n2)/GCD(n1,n2);
        }

};

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    Solution s;
    cout << s.LCM(n1,n2);
    return 0;
}

//*T.C: O(log(min(n1,n2)))
//*S.C: O(1)