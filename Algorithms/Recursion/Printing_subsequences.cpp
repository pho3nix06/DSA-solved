#include <iostream>
#include <vector>
#include <array>
using namespace std;

void subsequence(int ind, vector<int> &arr, int a[], int n)
{
    if (ind == n)
    {
        for (auto it : arr)
        {
            cout << it << " ";
        }
        if (arr.size() == 0)
        {
            cout << "NULL";
        }
        cout << endl;
        return;
    }
    arr.push_back(a[ind]);
    subsequence(ind + 1, arr, a, n);
    arr.pop_back();
    subsequence(ind + 1, arr, a, n);
}

int main()
{
    int lol[] = {1, 2, 3, 7, 9, 21};
    int size = 6;
    vector<int> temp;
    subsequence(0, temp, lol, size);
    return 0;
}
