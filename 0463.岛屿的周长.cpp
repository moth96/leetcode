#include "solution.h"

int islandPerimeter(vector<vector<int>>& grid)
{
	if (grid.empty()) return 0;
	int res = 0;
	int n = grid.size();
	int m = grid[0].size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (grid[i][j])
			{
				if (i == 0 || grid[i - 1][j] == 0) res++;
				if (i == n - 1 || grid[i + 1][j] == 0) res++;
				if (j == 0 || grid[i][j - 1] == 0) res++;
				if (j == m - 1 || grid[i][j + 1] == 0) res++;
			}
		}
	}
	return res;
}

