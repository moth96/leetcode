int eraseOverlapIntervals(vector<vector<int>>& intervals) 
{
    if (intervals.empty()) return 0;
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), [](const auto &u, const auto &v){return u[1]<v[1];});

    int right = intervals[0][1];
    int num = 1;
    for (int i = 1; i < n; i++)
    {
        if(intervals[i][0] >= right)
        {
            num++;
            right = intervals[i][1];
        }
    }
    return n - num;
}
