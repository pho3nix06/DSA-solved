// https://bit.ly/2Ba6W7i

#include <iostream>
#include <vector>
#include <algorithm>
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

        sort(A.begin(), A.end());
        vector<vector<int>> result;
        vector<int> path;
        int n = A.size();

        solve(A, n, result, path, B, 0);

        return result;
    }
};

int main()
{

    vector<int> A = {2, 3, 5, 3};
    int sum = 8;
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
