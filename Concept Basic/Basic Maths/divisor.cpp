/*
You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

A number which completely divides another number is called it's divisor.

Example 1:
Input: n = 6

Output = [1, 2, 3, 6]

Explanation: The divisors of 6 are 1, 2, 3, 6.

Example 2:
Input: n = 8

Output: [1, 2, 4, 8]

Explanation: The divisors of 8 are 1, 2, 4, 8.
*/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> divisors(int n){
//             vector<int> vec;
//             for(int i=1; i<=n; i++){
//                 if(n%i == 0){
//                     vec.push_back(i);
                    
//                 }
//             }
//             return vec;
//         }
// };

// int main(){
//     int n;
//     cin >> n;
//     Solution s;
//     for(auto at: s.divisors(n)){
//         cout << at << " ";
//     }
//     return 0;
// }

//*T.C: O(n)
//*S.C: O(K) -----> not more than sqrt(N)

//------------------x--------------
//*OR

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> divisors(int n){
//             vector<int> vec;
//             for(int i=1; i*i<=n; i++){
//                 if(n%i == 0){
//                     vec.push_back(i);
//                     if(i != n/i){
//                         vec.push_back(n/i);
//                     }
                    
//                 }
//             }
//             sort(vec.begin(),vec.end());  //*O(NlogN) -> T.C
//             return vec;
//         }
// };

// int main(){
//     int n;
//     cin >> n;
//     Solution s;
//     for(auto at: s.divisors(n)){
//         cout << at << " ";
//     }
//     return 0;
// }

//*T.C: O(sqr(n)) + O(Klogn):(sort)
//*S.C: O(K)  -------> max it can be O(sqrt(N))

//--------------x---------------

//*OR

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> divisors(int n){
            vector<int> vec;
            vector<int> vec1;
            for(int i=1; i*i<=n; i++){
                if(n%i == 0){
                    vec.push_back(i);
                    if(i != n/i){
                        vec1.push_back(n/i);
                    }
                    
                }
            }
            for(auto i= vec1.rbegin(); i<vec1.rend(); i++){
                vec.push_back(*i);
            }
            return vec;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    for(auto at: s.divisors(n)){
        cout << at << " ";
    }
    return 0;
}

//*T.C: O(sqrt(N))
//*S.C: O(K)


//*Note: use rbegin(), rend() instead of begin(), end() in reverse ( because end() -1 for empty will give runtime error)