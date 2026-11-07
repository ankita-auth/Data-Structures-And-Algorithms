//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> unionArray(vector<int>& num1, vector<int>& num2){
//             set<int> s;
//             vector<int> Union;

//             for(int num:num1){
//                 s.insert(num);
//             }

//             for(int num:num2){
//                 s.insert(num);
//             }

//             for(int num:s){
//                 Union.push_back(num);
//             }

//             return Union;

//         }
    
// };

// int main(){
//     vector<int> num1;
//     vector<int> num2;
//     vector<int> U;
//     int x,y;
//     cin>>x;
    
//     for(int i=0;i<x;i++){
//         int val;
//         cin>>val;
//         num1.push_back(val);
        
//     }

//     cin>>y;
//     for(int i=0;i<y;i++){
//         int val;
//         cin>>val;
//         num2.push_back(val);
//     }


//     Solution s;
//     U=s.unionArray(num1,num2);
//     for(auto i:U){
//         cout<<i<<" ";
//     }


    
// }

//*T.C: O(N1 logn) + O(N2 logn) + O(N1 + N2)
//*S.C:O(N1 +N2)=>for solving[Set] + O(N1 + N2)=>for display[Union]

//------------------------X--------------------------

//*Optimal
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> unionArray(vector<int>& num1, vector<int>& num2){
            vector<int> Union;
            int i=0,j=0;
            int n=num1.size();
            int m=num2.size();

            while(i<n && j<m){
                if(num1[i]<num2[j]){
                    if(Union.size()==0 || Union.back()!=num1[i]){
                        Union.push_back(num1[i]);
                       
                    }
                    i++;
                   
                }

                else{
                    if(Union.size()==0 || Union.back()!=num2[j]){
                        Union.push_back(num2[j]);
                        

                    }
                    j++;
                }
            }

            while(i<n){
                if(Union.back()!=num1[i]){
                    Union.push_back(num1[i]);
                }
                i++;
            }

            while(j<m){
                if(Union.back()!=num2[j]){
                    Union.push_back(num2[j]);

                }
                j++;
            }


            return Union;

        }
    
};

//*Take sorted input
int main(){
    vector<int> num1;
    vector<int> num2;
    vector<int> U;
    int x,y;
    cin>>x;
    
    for(int i=0;i<x;i++){
        int val;
        cin>>val;
        num1.push_back(val);
        
    }

    cin>>y;
    for(int i=0;i<y;i++){
        int val;
        cin>>val;
        num2.push_back(val);
    }


    Solution s;
    U=s.unionArray(num1,num2);
    for(auto i:U){
        cout<<i<<" ";
    }


    
}

//*T.C: O(n+m)
//*S.C:O(n+m)