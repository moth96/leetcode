#include"solution.h"

int helper(int poi, int x, int y, vector<vector<bool>>& visited)
{
	int n = visited.size();
	int m = visited[0].size();
	if (poi == 0 && (y + 1 >= m || visited[x][y + 1])) poi = 1;
	else if (poi == 1 && (x + 1 >= n || visited[x + 1][y])) poi = 2;
	else if (poi == 2 && (y - 1 < 0 || visited[x][y - 1])) poi = 3;
	else if (poi == 3 && (x - 1 < 0 || visited[x - 1][y])) poi = 0;
	return poi;
}

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
	if (matrix.empty()) return {};
	int n = matrix.size();
	int m = matrix[0].size();
	vector<vector<bool>> visited(n, vector<bool>(m));
	vector<int> res(n * m);
	int poi = 0;
	int index = 0;
	int x = 0;
	int y = 0;
	res[index++] = matrix[x][y];
	visited[x][y] = true;
	while (index < n * m)
	{
		poi = helper(poi, x, y, visited);
		switch (poi)
		{
		case 0:y++; break;
		case 1:x++; break;
		case 2:y--; break;
		case 3:x--; break;
		default:break;
		}
		res[index++] = matrix[x][y];
		visited[x][y] = true;
	}
	return res;
}