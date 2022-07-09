// https://bit.ly/3nHFqFU

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool safe(int row, int col, int n, vector<int> &ts)
    {
        for (auto it : ts)
        {
            if (it == col)
                return false;
        }

        for (int i = 0; i < ts.size(); i++)
        {
            if ((row - i - 1) == abs(col - ts[i]))
                return false;
        }
        return true;
    }

    void solve(int row, int n, vector<int> &ts, vector<vector<int>> &ans)
    {
        if (row > n)
        {
            ans.push_back(ts);
            return;
        }
        for (int col = 1; col <= n; col++)
        {
            if (safe(row, col, n, ts))
            {
                ts.push_back(col);
                solve(row + 1, n, ts, ans);
                ts.pop_back();
            }
        }
    }

public:
    vector<vector<int>> nQueen(int n)
    {
        vector<vector<int>> ans;
        vector<int> ts;
        solve(1, n, ts, ans);
        return ans;
    }
};

int main()
{
    int n = 4;
    Solution ob;
    vector<vector<int>> ans = ob.nQueen(n);
    if (ans.size() == 0)
        cout << -1 << "\n";
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "[";
            for (int u : ans[i])
                cout << u << " ";
            cout << "] ";
        }
        cout << endl;
    }
    return 0;
}