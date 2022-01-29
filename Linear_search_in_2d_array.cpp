#include <iostream>
using namespace std;

bool search(int arr[][4], int tar, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (tar == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int item = 0;
    cin >> item;
    bool op = search(arr, item, 3, 4);
    cout << op;
    return 0;
}
