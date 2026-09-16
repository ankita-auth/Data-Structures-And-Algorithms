#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<char> reverseString(vector<char>& s){
            reverse(s,0,s.size()-1);  
            return s;          
        } 
    private:
        void reverse(vector<char>& s,int left,int right){
            if(left>=right){
                return;
            }
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            reverse(s,left+1,right-1);
        }        
};
int main(){
    Solution sol;
    vector<char> s;
    char c;
    while(cin>>c){
        s.push_back(c);
    }
    vector<char> str=sol.reverseString(s);
    for(auto i:str){
        cout<<i;
    }
}

//*T.C:O(n/2)=O(n)
//*S.C:O(n/2)=O(n)