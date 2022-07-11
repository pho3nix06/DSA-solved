// https://bit.ly/3nDaruM
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void subset(int ind, vector<int> &ans, int sum, vector<int> &arr, int n)
    {
        if (ind == n)
        {
            ans.push_back(sum);
            return;
        }

        subset(ind + 1, ans, sum + arr[ind], arr, n);

        subset(ind + 1, ans, sum, arr, n);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        subset(0, ans, 0, arr, N);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans)
        {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}