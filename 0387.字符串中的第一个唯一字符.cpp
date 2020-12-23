int firstUniqChar(string s)
{
    unordered_map<int,int> f;
    for (char x : s)
    {
        f[x]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (f[s[i]] == 1) return i;
    }
    return -1;
}
    
