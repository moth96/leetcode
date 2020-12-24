int candy(vector<int>& ratings)
{
    int n = ratings.size();
    vector<int>left(n,1);
    for (int i = 1; i < n; i++)
    {
        if (ratings[i] > ratings[i - 1])
        {
            left[i] = left[i - 1] + 1;
        }
        else    continue;
    }
    int right = 0;
    int ret = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i < n - 1 && ratings[i] > ratings[i + 1])
        {
            right++;
        }
        else
        {
            right = 1;
        }
        ret += max(left[i], right);
    }
    return ret;
}
