#include "solution.h"

string sortString(string s) 
{
    string res;
    vector<int> num(26);
    for (const auto elem : s)
        num[elem - 'a']++;
    while(1)
    {
        for (int i = 0; i < 26; i++)
        {
            if(num[i]) 
            {
                res.push_back('a'+i);
                num[i]--;
            }
        }
        for (int i = 25; i >= 0; i--)
        {
            if(num[i]) 
            {
                res.push_back('a'+i);
                num[i]--;
            }
        }
        if (res.size() == s.size()) break;
    }
    return res;
}
