// https://bit.ly/3NFFUH2
// Algo:
// 1. This is another problem of picking an element from an array or not picking an element from array
// 2. We can pick same element more than once, so we can stick to one index

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    void solve(vector<int> &arr, int n, vector<vector<int>> &result, vector<int> &path, int sum, int i)
    {
        if (i == n)
        {
            if (sum == 0)
            {
                result.push_back(path);
            }
            return;
        }

        if (sum >= arr[i])
        {
            path.push_back(arr[i]);
            solve(arr, n, result, path, sum - arr[i], i);
            path.pop_back();
        }

        solve(arr, n, result, path, sum, i + 1);
    }
    vector<vector<int>> combinationSum(vector<int> &A, int B)
    {
        unordered_set<int> s(A.begin(), A.end());
        vector<int> arr(s.begin(), s.end());
        sort(arr.begin(), arr.end());

        vector<vector<int>> result;
        vector<int> path;
        int n = arr.size();

        solve(arr, n, result, path, B, 0);

        return result;
    }
};

int main()
{
    vector<int> A = {6, 5, 7, 1, 8, 2, 9, 9, 7, 7, 9};
    int sum = 6;
    Solution ob;
    vector<vector<int>> result = ob.combinationSum(A, sum);
    if (result.size() == 0)
    {
        cout << "Empty";
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << '[';
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
            if (j < result[i].size() - 1)
                cout << " ";
        }
        cout << ']';
        cout << endl;
    }
    cout << "\n";
}
