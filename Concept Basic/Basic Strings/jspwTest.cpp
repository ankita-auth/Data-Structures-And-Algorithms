#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<char> frequencySort(string &s)
    {
        map<char, int> freq;
        for (char c : s)
            freq[c]++;

        map<int, string,greater<int>> sorted;
        for (auto [ch, cnt] : freq)
        {
            sorted[cnt] += ch;
        }
        vector<char> t;
        for(auto[i,str] : sorted){
            sort(str.begin(),str.end());
            t.insert(t.end(), str.begin(), str.end());


        }
        return t;

    }
};

int main()
{
    Solution sol;
    string s = "tree";
    vector<char> result = sol.frequencySort(s);
    for(char c : result) {
        cout << c << " ";
    }
    return 0;

}
