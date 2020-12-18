#include "solution.h"

char findTheDifference(string s, string t)
{
    char res = 0;
    for (const char x : s + t) res ^= x;
    return res;
}
