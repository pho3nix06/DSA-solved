//Return the element whose value is equal to it's index value (considering 1th indexing)
// https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        vector<int> op;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
            {
                op.push_back(arr[i]);
            }
        }
        return op;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty())
        {
            cout << "Not Found";
        }
        else
        {
            for (int x : ans)
            {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}