// https://bit.ly/3PevEa7

// #include <iostream>
// #include <vector>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> Part(string s)
    {
        vector<vector<string>> ans;
        vector<string> temp;
        function(0, s, temp, ans);
        return ans;
    }

    void function(int index, string s, vector<string> &temp, vector<vector<string>> &ans)
    {
        if (index == s.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < s.size(); ++i)
        {
            if (isPalindrome(s, index, i))
            {
                temp.push_back(s.substr(index, i - index + 1));
                function(i + 1, s, temp, ans);
                temp.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
};

int main()
{
    string s = "ababbbabbababa";
    Solution obj;
    vector<vector<string>> ans = obj.Part(s);
    int n = ans.size();
    cout << "The Palindromic partitions are :-" << endl;
    cout << "[ " << endl;
    for (auto i : ans)
    {
        cout << "[ ";
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "] ";
        cout << endl;
    }
    cout << "]" << endl;
    cout << ans.size();
    return 0;
}