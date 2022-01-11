#include <iostream>
using namespace std;

int lowerPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int upperPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] <= arr[e])
        {
            e = mid - 1;
        }
        else
        {
            s = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int size = 9;
    // int test[size] = {10, 34, 56, 62, 78, 83, -1, 1, 2, 3};
    // int test[size] = {10, 20, 30, 40, 45, 56, 1, 2, 3, 4};

    int test[size] = {10, 20, 30, 40, 45, 1, 2, 3, 4};
    cout << "The lower pivot of the given array is " << lowerPivot(test, size) << endl;
    cout << "The upper pivot of the given array is " << upperPivot(test, size) << endl;
    return 0;
}
