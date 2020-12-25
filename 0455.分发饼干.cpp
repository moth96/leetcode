int findContentChildren(vector<int>& g, vector<int>& s)
{
    sort( g.begin(), g.end() );
    sort( s.begin(), s.end() );
    int res = 0, i = 0, j = 0;
    while (j < s.size() && i < g.size())
    {
        if (g[i] <= s[j])
        {
            res++; i++;
        }
        j++
    }
    return res;
}
