#include"solution.h"

bool PredictTheWinner(vector<int>& nums) {
	int n = nums.size();
	vector<vector<int>> dp(n, vector<int>(n));
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i; j < n; j++)
		{
			if (i == j) dp[i][i] = nums[i];
			else dp[i][j] = max((nums[i] - dp[i + 1][j]), nums[j] - dp[i][j - 1]);
		}
	}
	return dp[0][n - 1] >= 0;
}