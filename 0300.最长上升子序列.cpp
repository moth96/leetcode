#include"solution.h"

int lengthOfLIS(vector<int>& nums)
{
	if (nums.empty()) return 0;
	int n = nums.size();
	vector<int> dp(n, 1);
	int res = dp[0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (nums[i] > nums[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
		res = max(res, dp[i]);
	}
	return res;
}