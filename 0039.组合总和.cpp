#include"solution.h"

void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int> cur,int start)
{
	if (target == 0)
	{
		res.push_back(cur);
		return;
	}
	else if (target < candidates[0]) return;
	else
	{
		for (int i = start; i < candidates.size(); i++)
		{
			cur.push_back(candidates[i]);
			backtrack(candidates, target - candidates[i], res, cur,i);
			cur.pop_back();
		}
	}
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
	vector<vector<int>> res;
	vector<int> cur;
	sort(candidates.begin(), candidates.end());
	backtrack(candidates, target, res, cur,0);
	return res;
}