#include"solution.h"

void trackback(vector<string>& res,string& cur,int left,int right,int n)
{
	if (cur.size() == n * 2)
	{
		res.push_back(cur);
		return;
	}
	if (left < n)
	{
		cur.push_back('(');
		trackback(res, cur, left + 1, right, n);
		cur.pop_back();
	}
	if (right < left)
	{
		cur.push_back(')');
		trackback(res, cur, left, right + 1, n);
		cur.pop_back();
	}
}

vector<string> generateParenthesis(int n)
{
	vector<string> res;
	string cur;
	trackback(res, cur, 0, 0, n);
	return res;
}