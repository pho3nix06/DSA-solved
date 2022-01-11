#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

void printArray(vector<int> &arr)
{
    int x = arr.size();
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> a = {1, 2, 3, 0, 0, 0};
    // vector<int> b = {2, 5, 6};
    vector<int> a = {0};
    vector<int> b = {1};
    printArray(a);
    printArray(b);
    mergeArray(a, 0, b, 1);
    printArray(a);
    return 0;
}
