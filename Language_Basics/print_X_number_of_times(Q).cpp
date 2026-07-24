/*
Problem: Print a Number N Times
 
Problem Statement:
Given two integers X and N, print the value X exactly N times.
 
Rules:
- Separate each number by a single space.
- Do not print a space after the last number.
- After printing all N numbers, move to the next line.
- If N = 0, print an empty line.
 
Input:
- Two integers X and N.
 
Output:
- Print the value X exactly N times following the given format.
 
Examples:
 
Example 1:
Input:
X = 7, N = 5
 
Output:
7 7 7 7 7
 
Explanation:
The number 7 is printed 5 times, separated by single spaces.
 
Example 2:
Input:
X = 15, N = 1
 
Output:
15
 
Explanation:
Since N = 1, the number is printed only once.
 
Example 3:
Input:
X = -5, N = 4
 
Output:
-5 -5 -5 -5
 
Explanation:
The number -5 is printed 4 times.
 
Constraints:
-100 <= X <= 100
0 <= N <= 100
*/
 
 
 
 
 
//------
 


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void printX(int X,int N){
        if(N==0){
            cout<<endl;
        }
        for(int i=0;i<N;i++){
            if(i==N-1){
                cout<<X<<endl;
            }else{
                cout<<X<<" ";

            }
            
        }
        
        
    }

};
int main(){
    Solution s;
    int X,N;
    cin>>X>>N;
    s.printX(X,N);

    return 0;
}