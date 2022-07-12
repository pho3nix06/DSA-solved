// https://bit.ly/39I3yVI
// Time complexity - O(n2)
// Space complexity - O(1)

// Algo:
// 1) We are sorting the array first so all the integers gets placed accordingly
// 2) Then we are using 2 pointer method to get the sum
// 3) One pointer(front)
// is indicating the i + 1 th integer and another pointer(back) is indicating n-1 th integer
// 4) Then in another while loop we are iterating from front to back while (front <back) and getting the sum
// 5) If sum < 0
//     front++ (getting closer to 0)
//    else if sum > 0
//    back-- (getting closer to 0)
//    else (sum == 0)
//    return true

// 6) at the end of the for loop return false

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool findTriplets(int arr[], int n)
    {
        sort(arr, arr + n);
        int front, back, sum = 0;

        for (int i = 0; i < n; i++)
        {
            front = i + 1;
            back = n - 1;
            while (front < back)
            {
                sum = arr[i] + arr[front] + arr[back];

                if (sum < 0)
                {
                    front++;
                }
                else if (sum > 0)
                {
                    back--;
                }
                else
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        if (obj.findTriplets(arr, n))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}