// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int getCommon(int stack1[], int stack2[])
    {
        sort(stack1, stack1 + 10);
        sort(stack2, stack2 + 10);
        int count = 0;

        for (int i = 0; i < 10; i++)
        {
            if (stack1[i] == stack2[i])
            {
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int stack1[10];
        for (int i = 0; i < 10; i++)
            cin >> stack1[i];

        int stack2[10];
        for (int i = 0; i < 10; i++)
            cin >> stack2[i];
        Solution ob;
        cout << ob.getCommon(stack1, stack2) << endl;
    }
    return 0;
} // } Driver Code Ends