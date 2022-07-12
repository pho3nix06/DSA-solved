// https://bit.ly/3anegkx

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    void all_permutation(string s, string ec, int freq[], unordered_set<string> &ans)
    {
        if (ec.size() == s.size())
        {
            ans.insert(ec);
            return;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (!freq[i])
            {
                ec.push_back(s[i]);
                freq[i] = 1;
                all_permutation(s, ec, freq, ans);
                ec.pop_back();
                freq[i] = 0;
            }
        }
    }

public:
    vector<string> find_permutation(string S)
    {
        string ec;
        unordered_set<string> ans;
        int freq[S.size()] = {0};
        all_permutation(S, ec, freq, ans);

        vector<string> boom;
        boom.insert(boom.end(), ans.begin(), ans.end());
        sort(boom.begin(), boom.end());
        return boom;
    }
};

int main()
{
    string S = "ABBA";
    Solution ans;
    vector<string> boom = ans.find_permutation(S);
    for (auto it : boom)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
