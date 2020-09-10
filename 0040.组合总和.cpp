#include"solution.h"

vector<vector<int>> res;
vector<int> cur;

void backtrack(vector<int>& candidates, int target, int start, vector<bool>& used)
{
	if (0 == target)
	{
		res.push_back(cur);
		return;
	}
	if (target < 0) return;
	for (int i = 0; i < candidates.size(); i++)
	{
		if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1])
			continue;
		cur.push_back(candidates[i]);
		used[i] = true;
		backtrack(candidates, target - candidates[i], i + 1, used);
		used[i] = false;
		cur.pop_back();
	}
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
{
	int n = candidates.size();
	vector<bool> used(n, false);
	sort(candidates.begin(), candidates.end());
	backtrack(candidates, target, 0, used);
	return res;
}