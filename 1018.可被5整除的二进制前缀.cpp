vector<bool> prefixesDivBy5(vector<int>& A) 
{
    int n = A.size();
    int num = 0;
    vector<bool> res(n,false);
    for (int i = 0; i < n; i++)
    {
        num = (num * 2 + A[i]) % 5;
        if (num % 5 == 0) res[i] = true; 
    }
    return res;
}
