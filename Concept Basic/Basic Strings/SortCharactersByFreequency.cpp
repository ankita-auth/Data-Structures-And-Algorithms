
//*Our Approach
// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution
// {
// public:
//     vector<char> frequencySort(string& s){
//         map<char,int> mpp;
//         for(int i=0; i<s.length(); i++){
//             mpp[s[i]]++;
 
//         }
//         map<int,string,greater<int>> mpp1;
//         for(auto it: mpp){
//             char ch = it.first;
//             int val = it.second;
//             mpp1[val] += ch;
//         }
 
//         vector<char> vec;
//         for(auto it: mpp1){
//             string str = it.second;
//             vec.insert(vec.end(),str.begin(),str.end());
//         }
//         return vec;
   
       
 
//     }
// };
 
// int main()
// {
//     Solution sol;
//     string s ;
//     cin >>s;
//     vector<char> result = sol.frequencySort(s);
//     for(char c : result) {
//         cout << c << " ";
//     }
//     return 0;
 
// }

//*T.C:O(nlogn)-->worst case, O(nlogk)-->average case (as map takes log k)
//*S.C:O(n)
 
//-----------------------------------X---------------------------------------

//*Editorial


#include <bits/stdc++.h>
using namespace std;
 
class Solution
{
private:
    static bool comparator(pair<int,char>p1,pair<int,char> p2){
        if(p1.first>p2.first) return true;
        if(p1.first<p2.first) return false;
        return p1.second<p2.second;
    }
public:
    vector<char> frequencySort(string& s){
       pair<int,char> freq[26];
       for(int i=0;i<26;i++){
        freq[i]={0,i+'a'};  
       }

       for(char ch:s){
        freq[ch-'a'].first++;
       } 

       sort(freq,freq+26,comparator);

       vector<char> ans;
       for(int i=0;i<26;i++){
        if(freq[i].first>0){
            ans.push_back(freq[i].second);
        }
        
       }
       return ans;
    }
};
 
int main()
{
    Solution sol;
    string s;
    cin >>s;
    vector<char> result = sol.frequencySort(s);
    for(auto it: result) {
        cout << it << " ";
    }
    return 0;
 
}

//*T.C:O(n)+O(26log26)=O(n)
//*S.C:O(k)=O(1)--->(k=26)