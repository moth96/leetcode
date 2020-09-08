#include"solution.h"

vector<vector<int>> res;
vector<int> cur;

void backtrack(vector<int>& nums, int start)
{
	res.push_back(cur);
	for (int i = start; i < nums.size(); i++)
	{
		cur.push_back(nums[i]);
		backtrack(nums, i + 1);
		cur.pop_back();
	}
}

vector<vector<int>> subsets(vector<int>& nums)
{
	backtrack(nums, 0);
	return res;
}