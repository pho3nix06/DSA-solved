// https://bit.ly/3xPlHZx

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}

void reverse(int a[], int low, int high)
{
    while (low <= high)
    {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}

void rotate(int arr[], int n)
{
    reverse(arr, 0, n - 2);
    reverse(arr, n - 1, n - 1);
    reverse(arr, 0, n - 1);
}