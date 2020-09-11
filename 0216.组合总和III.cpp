#include"solution.h"

//step 1
vector<vector<int>> res;
vector<int> cur;

void backtrack(int k, int n,int i)
{
	if (k == 0)
	{
		if (n == 0)
		{
			res.push_back(cur);
			return;
		}
		else
			return;
	}
	if (i > 9) return;
	cur.push_back(i);
	backtrack(k - 1, n - i, i + 1);
	cur.pop_back();
	backtrack(k, n, i + 1);
}

vector<vector<int>> combinationSum3(int k, int n)
{
	backtrack(k, n, 1);
	return res;
}

//step2
//vector<vector<int>> res;
//vector<int> cur;
//
//void backtrack(int k, int n, int start)
//{
//	if (k == 0)
//	{
//		if (n == 0)
//		{
//			res.push_back(cur);
//			return;
//		}
//		else return;
//	}
//	for (int i = start; i < 10; i++)
//	{
//		cur.push_back(i);
//		backtrack(k - 1, n - i, i + 1);
//		cur.pop_back();
//	}
//}
//
//vector<vector<int>> combinationSum3(int k, int n)
//{
//	backtrack(k, n, 1);
//	return res;
//}
