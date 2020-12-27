bool isIsomorphic(string s, string t) 
{
    unordered_map<int, int> u1;
    unordered_map<int, int> u2;
    for (int i = 0; i < s.size(); i++)
    {
        char x = s[i], y = t[i];
        if((u1.count(x) && u1[x] != y) || (u2.count(y) && u2[y] != x))
        {
            return false;
        }
        u1[x] = y;
        u2[y] = x;
    }
    return true;    
}
