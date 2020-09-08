#include"solution.h"

bool wordBreak(string s, vector<string>& wordDict) {
    int n = wordDict.size();
    set<string> wordSet;
    for (int i = 0; i < n; ++i)
        wordSet.insert(wordDict[i]);

    vector<bool> dp(s.size() + 1);
    dp[0] = true;

    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end())
            {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[s.size()];
}