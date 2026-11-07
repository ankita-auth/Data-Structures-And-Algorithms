//*Brute Force

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> intersectionArray(vector<int>& num1,vector<int>& num2 ){
            vector<int> ans;
            vector<int> visited(num2.size(),0);
            
            for(int i=0;i<num1.size();i++){
                for(int j=0;j<num2.size();j++){
                    if(num1[i]==num2[j] && visited[j]==0){
                        ans.push_back(num2[j]);

                        visited[j]=1;
                        break;
                    }
                    else if(num2[j]>num1[i]){
                        break;
                    }
                }
            }
            return ans;
        }
};

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
    U=s.intersectionArray(num1,num2);
    for(auto i:U){
        cout<<i<<" ";
    }

}

//*T.C:O(n1*n2)
//*S.C:O(n2)