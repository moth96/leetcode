#include"solution.h"

vector<vector<int>> merge(vector<vector<int>>& intervals)
{
	int n = intervals.size();
	if (n == 0) return {};
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> res;
	for (int i = 0; i < n; i++)
	{
		int l = intervals[i][0], r = intervals[i][1];
		if (res.empty() || res.back()[1] < l)
			res.push_back(intervals[i]);
		else
			res.back()[1] = max(res.back()[1], r);
	}
	return res;
}