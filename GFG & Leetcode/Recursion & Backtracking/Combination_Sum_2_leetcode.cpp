// https://bit.ly/3RsSFbo

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void function(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            function(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        function(0, target, candidates, ans, ds);
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> candidate = {2, 5, 2, 1, 2};
    int target = 5;
    vector<vector<int>> only = obj.combinationSum2(candidate, target);
    cout << "[" << endl;
    for (int i = 0; i < only.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < only[i].size(); j++)
        {
            cout << only[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }
    cout << "]" << endl;
    return 0;
}
