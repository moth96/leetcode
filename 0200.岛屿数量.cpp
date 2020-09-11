#include"solution.h"

void dfs(vector<vector<char>>& grid, int i, int j)
{
	int n = grid.size();
	int m = grid[0].size();

	grid[i][j] = '0';
	if (i - 1 >= 0 && grid[i - 1][j] == '1') dfs(grid, i - 1, j);
	if (j - 1 >= 0 && grid[i][j - 1] == '1') dfs(grid, i, j - 1);
	if (i < n - 1 && grid[i + 1][j] == '1') dfs(grid, i + 1, j);
	if (j < m - 1 && grid[i][j + 1] == '1') dfs(grid, i, j + 1);

}

int numIslands(vector<vector<char>>& grid)
{
	int n = grid.size();
	if (n == 0) return 0;
	int m = grid[0].size();
	int res = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (grid[i][j] == '1')
			{
				res++;
				dfs(grid, i, j);
			}
		}
	}

	return res;
}