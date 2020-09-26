#include"solution.h"

int getSum(int x)
{
	int res = 0;
	for (; x; x /= 10) res += x % 10;
	return res;
}

int movingCount(int m, int n, int k)
{
	if (k == 0) return 1;
	queue<pair<int, int>> Q;
	int dx[2] = { 0,1 };
	int dy[2] = { 1,0 };
	vector<vector<int>> visited(m, vector<int>(n, 0));
	Q.push(make_pair(0, 0));
	visited[0][0] = 1;
	int res = 1;
	while (!Q.empty())
	{
		auto x = Q.front().first;
		auto y = Q.front().second;
		Q.pop();
		for (int i = 0; i < 2; i++)
		{
			int tx = dx[i] + x;
			int ty = dy[i] + y;
			if (tx < 0 || tx >= m || ty < 0 || ty >= n || visited[tx][ty] || getSum(tx) + getSum(ty) > k) continue;
			Q.push(make_pair(tx, ty));
			visited[tx][ty] = 1;
			res++;
		}
	}
	return res;
}