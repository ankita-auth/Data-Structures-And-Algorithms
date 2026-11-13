#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> rotateMatrix(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        
        vector<int> ans;
        vector<int> rans(n*n);

        for (auto &row : matrix)
            ans.insert(ans.end(), row.begin(), row.end());
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                x = n * n - (n - i) * j;
                rans.push_back(x);
            }
        }
        return rans;
    }
};
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;

    vector<int> result = obj.rotateMatrix(matrix);

    for (int x : result)
        cout << x << " ";

    return 0;
}