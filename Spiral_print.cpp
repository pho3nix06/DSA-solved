#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        vector<int> ans;
        int tr = 0, lc = 0;
        int br = r - 1;
        int rc = c - 1;

        int count = 0;
        int total = r * c;

        while (count < total)
        {
            for (int i = lc; count < total && i <= rc; i++)
            {
                ans.push_back(matrix[tr][i]); //top row
                count++;
            }
            tr++;

            for (int i = tr; count < total && i <= br; i++)
            {
                ans.push_back(matrix[i][rc]); //right column
                count++;
            }
            rc--;

            for (int i = rc; count < total && i >= lc; i--)
            {
                ans.push_back(matrix[br][i]); //bottom row
                count++;
            }
            br--;

            for (int i = br; count < total && i >= tr; i--)
            {
                ans.push_back(matrix[i][lc]); //left column
                count++;
            }
            lc++;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++)
        {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}