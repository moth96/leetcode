#include"solution.h"

void dfs(int n, int k, int index, string& path, vector<int>& factorial, vector<bool>& used)
{
	if (index == n) return;
	int cnt = factorial[n - 1 - index];
	for (int i = 1; i < n + 1; i++)
	{
		if (used[i]) continue;
		if (cnt < k) 
		{
			k -= cnt;
			continue;
		}
		path += ('0' + i);
		used[i] = true;
		dfs(n, k, index + 1, path, factorial, used);
		return;
	}
	
}

string getPermutation(int n, int k)
{
	if (n == 0) return "";
	vector<bool> used(n + 1, false);
	string path = "";
	vector<int> factorial(n + 1, 1);
	for (int i = 1; i < n + 1; i++)
		factorial[i] = factorial[i - 1] * i;
	dfs(n, k, 0, path, factorial, used);
	return path;
}