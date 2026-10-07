/*
You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

Example 1:
Input: n1 = 4, n2 = 6

Output: 2

Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.

Example 2:
Input: n1 = 9, n2 = 8

Output: 1

Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

Greatest Common divisor = 1.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        // int GCD(int n1, int n2){
        //     int largest = 1;
        //     int n = min(n1,n2);
        //     for(int i=1; i<=n ; i++){
        //         if(n1 % i ==0 && n2 %i == 0){
        //             largest = i;
        //         }
        //     }
        //     return largest;


        // }

        int GCD(int n1, int n2){
            int n = min(n1,n2);
            for(int i=n; i>=1 ; i--){
                if(n1 % i ==0 && n2 %i == 0){
                    return i;
                }
            }
        }
};

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    Solution s;
    cout << s.GCD(n1,n2);
    return 0;


}

//*T.C : O(min(n1,n2))
//*S.C : O(1)

//-------------------x--------------
//*OR
//*Ecludian Algorithm

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int GCD(int n1, int n2){
//             while(n2 != 0){
//                 int r = n1 % n2;
//                 n1 = n2;
//                 n2 = r;
                
//             }
//             return n1;
            


//         }
// };

// int main(){
//     int n1,n2;
//     cin >> n1 >> n2;
//     Solution s;
//     cout << s.GCD(n1,n2);
//     return 0;


// }

//*T.C: O(log(min(n1,n2)))
//*S.C: O(1)

//-----------------x--------------
//*OR

//*Subtraction Ecludian Algorithm

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int GCD(int n1, int n2){
            while(n1 != 0 && n2 != 0){
                if(n1 > n2){
                    n1 = n1 - n2;
                }
                else {
                    n2 = n2 - n1; 
                }
            }
            if(n2 == 0){
                return n1;
            }
            return n2;
        }
};
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    Solution s;
    s.GCD(n1,n2);
    return 0;
}

//-----------------x------------
//*OR

//*Ecludian Algorithm(Striver)

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int GCD(int n1, int n2){
            while(n1 != 0 && n2 != 0){
                if(n1 > n2){
                    n1 = n1 % n2;
                }
                else {
                    n2 = n2 % n1; 
                }
            }
            if(n2 == 0){
                return n1;
            }
            return n2;
        }
};
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    Solution s;
    s.GCD(n1,n2);
    return 0;
}

//*T.C: O(log(min(n1,n2)))
//*S.C: O(1)