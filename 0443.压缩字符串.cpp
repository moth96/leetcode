#include "solution.h"

int compress(vector<char>& chars)
{
    int res =  0;
    for (int start = 0, end = 0; start < chars.size(); start = end)
    {
        while (end < chars.size() && chars[start] == chars[end]) 
            end++;
        chars[res++] = chars[start];
        if (end - start == 1) continue;
        for (const auto elem : to_string(end - start))
            chars[res++] = elem;
    }
    return res;
}
