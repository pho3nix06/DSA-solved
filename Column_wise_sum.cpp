#include <iostream>
using namespace std;

int main()
{
    int row = 3, col = 4;
    int arr[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int sum[col] = {0};

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum[i] += arr[j][i];
        }
    }

    for (int i = 0; i < col; i++)
    {
        cout << sum[i] << " ";
    }

    return 0;
}
