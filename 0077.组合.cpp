#include"solution.h"

vector<vector<int>> res;
vector<int> cur;

void backtrack(int n,int k,int signal)
{
	if (k == cur.size())
	{
		res.push_back(cur);
		return;
	}
	else
	{
		for (int i = signal; i < n + 1; i++)
		{
			cur.push_back(i);
			backtrack(n, k, i + 1);
			cur.pop_back();
		}
	}
}

vector<vector<int>> combine(int n, int k)
{
	backtrack(n, k, 1);
	return res;
}