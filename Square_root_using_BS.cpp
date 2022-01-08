//Sqaure root of a number using binary search

//https://practice.geeksforgeeks.org/problems/square-root/1

#include <iostream>
using namespace std;

int sqrtN(long long int N)
{
    int s = 1, e = N;
    long long int mid = s + (e - s) / 2;

    long long int ans = 0;
    while (s <= e)
    {
        long long int sqr = mid * mid;
        if (sqr == N)
        {
            return mid;
        }
        else if (sqr < N)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (sqr > N)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 30;
    double op = sqrtN(n);
    cout << op;
    return 0;
}
