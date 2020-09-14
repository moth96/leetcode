#include"solution.h"

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target)
{
	if (matrix.empty() || matrix[0].empty()) return false;
	int n = matrix.size();
	int m = matrix[0].size();
	int i = 0;
	int j = m - 1;
	while (j >= 0 && i < n)
	{
		if (target == matrix[i][j]) return true;
		else if (target > matrix[i][j]) i++;
		else if (target < matrix[i][j]) j--;
	}
	return false;
}