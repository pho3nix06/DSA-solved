// https://bit.ly/3O9J8np

// message : This problem is just a way to think smartly

#include <bits/stdc++.h>
using namespace std;

vector<int> inversePermutation(int arr[], int size);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> ans = inversePermutation(arr, n);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}

vector<int> inversePermutation(int arr[], int size)
{
    vector<int> op(size);

    for (int i = 0; i < size; i++)
    {
        op[arr[i] - 1] = i + 1;
    }
    return op;
}